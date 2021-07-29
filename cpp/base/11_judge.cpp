#include <iostream>
using namespace std;

//判断

int main()
{
    /**
     * 判断语句
     * if语句
     * switch语句
     * 嵌套
     * ?:运算符
     * 
     */

    int a = 10;
    int b = 20;
    if (a > b)
    {
        cout << "a大于b" << endl;
    }
    else if (a < b)
    {
        cout << "a小于b" << endl;
    }
    else
    {
        cout << "a等于b" << endl;
    }

    /**
     * switch语句
     * switch(expression)
     * {
     *      case constant-expression:
     *          语句;
     *          break;
     *      default:
     *          语句;
     * }
     * 
     * 1、switch语句中的expression必须是一个整型或枚举类型，或者是一个class类型，其中class有一个单一的转换函数将其转换为整型或枚举类型
     * 2、在一个switch中可以有任意数量的case语句。每个case后跟一个要比较的值和一个冒号
     * 3、case的constant-expression必须与switch中的变量具有相同的数据类型，且必须是一个常量或字面量
     * 4、当被测试的变量等于case中的常量时，case后跟的语句将被执行，直到遇到break语句为止
     * 5、不是每一个case都需要包含break。如果case语句不包含break，控制流将会继续后续的case，直到遇到break为止
     * 6、一个switch语句可以有一个可选的default case，出现在switch的末尾。default可用于在上面所有case都不为真时执行的一个任务
     * default case中的break语句是不必需的。
     * 
     */

    int c = 10;
    int d = 10;
    switch (c)
    {
        case d:
            cout << "c的值是：10" << endl;
            break;
        case 11:
            cout << "c的值是：11" << endl;
            break;

        default:
            cout << "default out" << endl;
    }

    /**
     * 嵌套
     * 意为if嵌套if，switch嵌套switch，写法而已
     */


    /**
     * ?:条件运算符
     * 语法：condition?语句1:语句2;
     * condition表达式的值为bool值，为true时则执行语句1返回，false时则执行语句2返回
     * 
     */


}