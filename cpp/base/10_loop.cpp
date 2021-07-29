#include <iostream>
using namespace std;
//循环
int main()
{

    /**
     * while循环
     * 语法：
     * while(condition) { 代码块；控制语句 }
     * 当condition为非零值的时候，会重复执行代码块
     * 
     */
    int a = 5;
    while (a >= 1)
    {
        cout << "a：" << a << endl;
        a--;
    }

    /**
     * for循环
     * 语法：for(init; condition; increment) { 代码块 }
     * init为初始语句，首先被执行，且只被执行一次。也可以什么都不写，只写一个分号
     * 第二步判断condition条件，非零则执行代码块
     * 执行代码块之后，程序会跳回到increment语句，increment用来控制init的变量，以此控制循环次数。可以留空不写分号，但是要在代码块内写控制init变量的操作语句
     * 
     */
    int b = 5;
    for (; b >= 1;)
    {
        cout << "b：" << b << endl;
        b--;
    }

    /**
     * do-while循环
     * 不像for和while循环，它们是在循环头部测试循环条件，do-while循环实在循环的尾部检查条件，do-while循环会确保至少执行一次循环
     * 语法：do { 代码块；控制语句； } while(condition)
     * 
     */
    int c = 5;
    do
    {
        cout << "c：" << c << endl;
        c--;
    } while (c >= 1);

    /**
     * 嵌套循环
     * 
     */

    /**
     * 循环控制语句
     * break：当即跳出整个循环
     * continue语句：忽略次循环，进入判断条件继续判断
     * goto语句：将控制转移到被标记的语句，不建议使用
     * 
     */

    //如果condition永远为假，则循环将变成无限循环
}