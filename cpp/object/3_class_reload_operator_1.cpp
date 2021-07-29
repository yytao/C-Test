/**
 * 重载运算符+号
 * 使得两个对象相加，返回结果
 * 
 */ 

#include <iostream>
using namespace std;

class Box
{
    public:
        double getVolume(void)
        {
            return width * height * breadth;
        }
        Box(double h=0, double w=0, double b=0):height(h),width(w),breadth(b){};

        Box operator+(const Box &b)
        {
            Box box;
            box.height = this->height + b.height;
            box.width = this->width + b.width;
            box.breadth = this->breadth + b.breadth;
            cout << "calling" << endl;
            return box;
        }
    protected:
        double height;
        double width;
        double breadth;

};

int main()
{

    Box A(1,2,3);
    Box B(1,2,3);

    Box C;
    C = A + B;

    double volumeA = A.getVolume();
    cout << volumeA << endl;

    double volumeB = B.getVolume();
    cout << volumeB << endl;

    double volumeC = C.getVolume();
    cout << volumeC << endl;
    return 0;
}