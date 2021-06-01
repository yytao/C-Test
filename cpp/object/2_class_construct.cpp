/*
 *
 * Time：2021-6-1
 * Mark：
 * 1、构造函数
 * 2、带参数的构造函数
 * 3、析构函数
 *  
 */

#include <iostream>
using namespace std;

class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line(double len); //这是析构函数
        ~Line();    //
    
    private:
        double length;
};

Line::Line(double len): length(len)     //初始化列表的方式来初始化字段
{
    cout << "Object is being created" << endl;
    //length = len;
}

Line::~Line()
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength()
{
    return length;
}

int main()
{

    Line line(10.0);
    cout << "Length of line " << line.getLength() << endl;

    line.setLength(6.0);
    cout << "Length of line " << line.getLength() << endl;
    return 0;
}
