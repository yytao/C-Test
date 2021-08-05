#include <iostream>
using namespace std;

int main()
{


    /**
     * C++ null 空指针
     * 在变量声明的时候，没有确切的地址可以赋值，为指针变量赋一个NULL值是一个良好的习惯。赋为NULL值的指针被称为空指针。
     * NULL指针是一个定义在标准库中的值为零的常量
     * 
     * 如果所有未使用的指针都被赋予空值，同时避免使用空指针，就可以防止误用一个未初始化的指针。很多时候，未初始化的变量存有一些垃圾值，
     * 导致程序难以调试。
     * 
     */

    int *ptr1 = NULL;
    cout << ptr1 << endl;   //ptr1的值为0
    
    int *ptr2 = nullptr;
    cout << ptr2 << endl;   //ptr2的值为0






}