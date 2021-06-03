/*
 *
 * Time：2021-6-3
 * Mark：
 * 1、friend 友元函数
 * 
 */

#include <iostream>
using namespace std;

class Box
{
    double width;
    public:
        friend void printWidth(Box box);
        void setWidth(double wid);
};

void Box::setWidth(double wid)
{
    width = wid;
}

void printWidth(Box box)
{
    cout << "Width of box :" << box.width << endl;
}

int main()
{
    Box box;

    box.setWidth(8);

    printWidth(box);

    return 0;

}