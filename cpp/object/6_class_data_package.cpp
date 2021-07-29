/**
 * 所有C++程序都有以下两个基本要素
 *      程序语句（代码）：这是程序中执行动作的部分，它们被称为函数
 *      程序数据：数据是程序的信息，会收到程序函数的影响
 * 
 * 封装是面向对象编程中的把数据和操作数据的函数绑定在一起的一个概念，这样能避免受到外界的干扰和作用，从而确保了安全。
 * 数据封装引申出了另一个重要的OOP概念，即数据隐藏。
 * 
 * public（公有成员）
 * private（私有成员）（默认）
 * protected（受保护成员）
 * 
 * 
 */

#include <iostream>
using namespace std;

class Box
{
    public:
        int getVolume(void)
        {
            return length * height * breadth;
        }

    private:
        double length;  //长
        double height;  //高
        double breadth; //宽
};

int main()
{

}

