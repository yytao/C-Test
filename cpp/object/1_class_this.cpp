/*
 *
 * Time：2021-6-3
 * Mark：
 * 1、this 指针
 * 
 */
#include <iostream>
using namespace std;

class Box
{
    public:
        Box(double l=2.0, double b=2.0, double h=2.0)
        {
            cout << "Contructor called" << endl;
        }
        double Volume()
        {
            return length * breadth * height;
        }
        int compare(Box box)
        {
            return this->Volume() > box.Volume();
        }

        private:
            double length;
            double breadth;
            double height;

};

int main()
{
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    if(Box1.compare(Box2))  //
    {
        cout << "box1 比 box2 大" << endl;
    }
    else
    {
        cout << "box2 比 box1 大" << endl;
    }


}