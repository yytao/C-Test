#include <iostream>
using namespace std;

class Box
{

    double length;  //私有（private）成员变量
    private:
        double width2;
        double getWidth2();

    public:
        double width;
        double height;
        double getWidth();

    double getArea()
    {
        return width * height;
    }
};

// 公有（public）成员函数定义
double Box::getWidth(void)
{
    return width;
}

// 私有（private）成员函数定义
double Box::getWidth2(){
    return width2;
}

int main()
{
    Box box1;
    Box box2;
    double area = 0.0;

    box1.width = 1.1;
    box1.height = 1.1;
    area = box1.getArea();

    cout << "box1的面积：" << area << endl;

    box2.width = 2.2;
    box2.height = 2.2;
    area = box2.width * box2.height;

    cout << "box2的面积：" << area << endl;


    cout << box1.getWidth2(); << endl;

    return 0;
}