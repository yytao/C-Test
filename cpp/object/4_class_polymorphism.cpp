/**
 * C++ 多态
 * 
 */

#include <iostream>
using namespace std;

class Shape
{
    protected:
        int width, height;

    public:
        Shape(int a=0, int b=0)
        {
            width = a;
            height = b;
        }

    // virtual 虚函数是在基类中使用virtual关键词声明的函数，在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数，
    // 我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。
    // virtual int area()
    // {
    //     cout << "Parent class area:" << endl;
    //     return 0;
    // }

    //pure virtual function
    virtual int area() = 0;
};

class Rectangle: public Shape
{
    public:
        Rectangle(int a=0, int b=0): Shape(a, b){}
        int area()
        {
            cout << "Rectangle class area:" << endl;
            return (width * height);
        }
};

class Triangle: public Shape
{
    public:
        Triangle(int a=0, int b=0):Shape(a, b){}
        int area()
        {
            cout << "Triangle class area:" << endl;
            return (width * height);
        }

};

int main()
{
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();

    return 0;

}