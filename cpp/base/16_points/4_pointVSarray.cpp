#include <iostream>
using namespace std;

int main()
{



    /**
     * 指针 vs 数组
     * 
     * 指针和数组是密切相关的。指针和数组在很多情况下是可以互换的，例如一个指向数组开头的指针，可以通过使用指针的算数运算或数组索引
     * 来访问数组。
     * 
     */
    int var[3] = {1,2,3};

    for(int i = 0; i < 3; i++)
    {
        *var = i;   //此时只是给数组首地址的元素重新赋值，但是不不可以对此指针做算术运算
        //因为var是一个指向数组开头的常量，不能作为左值。

        cout << *var << endl;
        cout << var[i] << endl;
    }




}