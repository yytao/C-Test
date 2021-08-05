#include <iostream>
using namespace std;

int main()
{

    /**
     * 指向指针的指针
     * 
     * 指向指针的指针是一种多级间寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址
     * 当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置
     * 
     * 
     * 
     * 
     */

    //当一个目标值被一个指针间接指向到另一个指针时，访问这个值需要使用两个星号运算符

    int var;
    int *ptr;
    int **pptr;

    var = 3000;

    ptr = &var;

    pptr = &ptr;

    cout << var << endl;
    cout << *ptr << endl;

    cout << **pptr << endl;
    


}