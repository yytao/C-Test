/*
 *
 * Time：2021-6-10
 * Mark：
 * 1、class 继承
 * * 面向对象程序设计中最重要的一个概念是继承。继承允许我们依据另一个类来定义一个类，
 *   这使得创建和维护一个应用程序变得更容易，这样做也达到了重用代码和提高执行时间的效果
 * 
 * * 当创建一个类时，你不需要重新编写新的数据成员和成员函数，只需指定新建的类继承了一个已有的类的成员即可。这个已有的类成为基类，
 *   新建的类成为派生类。
 * 
 * * 派生类可以访问基类中所有的非私有成员。因此基类成员如果不想被派生类的成员函数访问，则应在基类中声明为private
 * 
 */

#include <iostream>
using namespace std;

class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }

    protected:
        int width;
        int height;
};

class PaintCost
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};


class Rectangle: public Shape, public PaintCost
{
    public:
        int getArea()
        {
            return (width * height);
        }
};

int main()
{

    Rectangle Rect;
    int area;

    Rect.setHeight(5);
    Rect.setWidth(7);

    area = Rect.getArea();

    cout << "Total area: " << area << endl;

    cout << "Total pain cost : $" << Rect.getCost(area) << endl;


}

