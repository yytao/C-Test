/*
 * 
 * Time：2021-6-1
 * Mark：
 * 1、C++类定义
 * 2、声明类对向
 * 3、类成员修饰符
 * 4、类成员函数
 * 5、
 * 
*/
#include <iostream>
using namespace std;

class Box
{

    //double length;  //无修饰符就是私有（private）成员变量
    private:
        double width;


    protected:
        double length;

    public:
        double height;
        void setWidth(double width);

    public:double getArea()
        {
            return width * height;
        }

    double getLenth()
        {
            return length;
        }
};

class smallBox:Box{
    void setSmallBoxWidth( double wid );
};

// 公有（public）成员函数定义
void Box::setWidth(double wid)
{
    width = wid;
}

int main()
{
    Box box1;
    Box box2;
    double area = 0.0;

    box1.setWidth(1.1);
    box1.height = 1.1;
    area = box1.getArea();

    cout << "box1的面积：" << area << endl;

    //box2.width = 2.2;
    //box2.height = 2.2;
    //area = box2.width * box2.height;
    //cout << "box2的面积：" << area << endl;


    //cout << box1.getWidth2(); << endl;    //private成员无法外部调用


    return 0;
}