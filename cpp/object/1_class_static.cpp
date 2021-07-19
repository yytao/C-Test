/*
 *
 * Time：2021-6-3
 * Mark：
 * 1、static 静态成员
 * * 声明静态成员时，无论创建多少个类的对象，静态成员都只有一个副本
 * * 静态成员在类的所有对象中是共享的
 * * 静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符::就可以访问
 */
#include <iostream>
using namespace std;

class Box
{
    public:

        static int objectCount;
        Box(double l, double b, double h)
        {
            cout << "Constructor called" << endl;
            length = l;
            breadth = b;
            height = h;
            objectCount++;
        }
        double Volume()
        {
            return length * breadth * height;
        }
        static int getCount()
        {
            return objectCount;
        }

    private:
        double length;
        double breadth;
        double height;
};

int Box::objectCount = 0;

int main()
{
    cout << "before :" << Box::getCount() << endl;
    
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    cout << "Total objects :" << Box::getCount() << endl;

}

