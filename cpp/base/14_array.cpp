#include <iostream>
using namespace std;

void function1(int *);
void function2(int [10]);
void function3(int []);
int * getRand();

int main()
{
    /**
     * 数组
     * 数组可以存储一个固定大小的相同类型元素的顺序集合。
     * 数组的声明并不是声明一个个的变量，而是声明一个数组变量。数组中的特定元素可以通过索引访问
     * 所有的数组都是由连续的内存位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素
     */


    /**
     * 声明
     * 在C++中要声明一个数组，需要指定元素的类型和元素的数量
     * type arrayName [ arraySize ];
     * 
     * arraySize必须是一个大于零的整数常量，type可以是任意有效的C++数据类型
     * 
     */
    int balance[10];


    /**
     * 初始化数组
     * 1、完整初始化：
     * 2、可省略arraySize：如果省略arraySize，则初始化的长度与大括号内的元素个数相同
     * 3、部分初始化：
     * 4、针对某个下标元素初始化赋值：只给对应的某个下标的元素初始化赋值
     */
    //完整初始化
    int a[2] = {1, 2};

    //可忽略arraySize，此时数组长度为2
    int b[] = {1, 2};

    //部分初始化，只给了前两个元素的值，其他的元素整数类型默认为0
    int c[10] = {1, 2};

    //针对某个下标元素初始化赋值
    c[5] = 5;

    cout << c[5] << endl;


    /**
     * 多维数组
     * 可以创建任意维度的数组，但是一般情况下，创建的数组是一维数组和二维数组
     * 
     */



    /**
     * 指向数组的指针
     * 数组名是一个指向数组中第一个元素的常量指针。不可重新赋值
     * 
     * 
     */
    double balance2[3] = {1000.0, 2.0, 3.4};
    double *p;
    
    p = balance2;
    cout << *(p+2) << endl;     //指针偏移形式访问数组元素



    /**
     * 传递数组给函数
     * C++不允许向函数传递一个完整的数组作为参数，但是可以通过指定不带索引的数组名来传递一个指向数组的指针
     * 如果想要在函数中传递数组，必须以一下三种方式：
     */
    //第一种方式：形式参数是一个指针
    int param1[5] = {1,2,3,4,5};
    function1(param1);
    cout << param1[0] << endl;  //注意：此时下标为0的元素在函数内已被修改，因为传递的是指针，同时会影响主函数的param1数组元素值

    //第二种方式：形式参数是已定义大小的数组
    function2(param1);
    cout << param1[1] << endl;
    
    //第三种方式：形式参数是未定义大小的数组
    function3(param1);
    cout << param1[2] << endl;


    



}


/**
 * 传递数组给函数===============================================
 */
//第一种方式：形式参数是一个指针
void function1(int *param)
{
    cout << "function1:" <<param[0] << endl;
    param[0]+=3;
}

//第二种方式：形式参数是已定义大小的数组    //C++不会对形参数组进行边界检查
void function2(int param[3])
{
    cout << "function2:" << param[4] << endl;
    param[1]+=3;
}

//第三种方式：形式参数是未定义大小的数组
void function3(int param[])
{
    cout << "function3:" << param[2] << endl;
    param[2]+=3;
}

/**
 * 从函数返回数组
 */
int * getRand()
{
    static int r[10];
    //设置种子
    srand((unsigned)time(NULL));

    for(int i = 0; i < 10; i++)
    {
        r[i] = rand();
    }

    return r;
}

