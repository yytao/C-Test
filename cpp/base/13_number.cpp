#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//数字

int main()
{
    /**
     * 数字
     * 当需要使用到数字时，我们会使用原始的数据类型，如int、short、long、float、double等等。
     */
    int s;
    int i;
    int l;
    int f;
    int d;
    s = 10;
    i = -1000;
    l = 100000;
    f = 230.47;
    d = 200.374;

    cout << "short s:" << s << endl;
    cout << "short i:" << i << endl;
    cout << "short l:" << l << endl;
    cout << "short f:" << f << endl;
    cout << "short d:" << d << endl;

    /**
     * 数学运算
     * C++中还包含了各种有用的函数，这些函数写在标准C和C++库中，叫做内置函数
     * 数据函数：引用数学头文件<cmath>
     * 
     */

    cout << "sin(d):" << sin(d) << endl;       //返回弧度的正弦
    cout << "abs(d):" << abs(i) << endl;       //返回整数的绝对值
    cout << "floor(d):" << floor(d) << endl;   //返回一个小于或等于参数的最大整数，可以理解为向下取整
    cout << "sqrt(d):" << sqrt(f) << endl;     //返回参数的平方根
    cout << "pow(d, 2):" << pow(d, 2) << endl; //第一个参数x，第二个参数y，返回x的y次方

    /**
     * C++随机数
     * 关于随机数生成器，有两个相关的函数，一个时 rand()，该函数只返回一个伪随机数。生成随机数之前必须先调用srand()函数。
     * time()函数获取系统时间的秒数，需要引用头文件<ctime>
     * 
     */
    int x, y;
    //srand((unsigned)time(NULL));

    for (x = 0; x < 10; x++)
    {
        y = rand();
        cout << "随机数：" << y << endl;
    }
}