#include<iostream>
#include<time.h>
using namespace std;

class Point
{
    int x;
    int y;
    int z;
public:
    Point()
    {
        cout << "Construct\n";
        x = y = z = 0;
    }
    Point(int x1, int y1, int z1)
    {
        cout << "Construct by 3 param\n";
        x = x1;
        y = y1;
        z = z1;
    }
    void Init()
    {
        x = rand() % 10;
        y = rand() % 10;
        z = rand() % 10;
    }
    void Init(int x1, int y1, int z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    void Output()
    {
        cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
    }
};

int main()
{
    srand(unsigned(time(0)));

    Point obj1;
    obj1.Output();

    Point obj2(10, 20, 30);
    obj2.Output();

    system("pause");

}
