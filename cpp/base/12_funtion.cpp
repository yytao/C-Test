#include <iostream>
using namespace std;

//函数

//前置声明，具体实现可以在文件内任意地方，形参列表可省略变量名，只写数据类型
int sum(int, int);


int main()
{
    
    int sumNumber;
    sumNumber = sum(3, 4);
    
    cout << sumNumber << endl;
}

int sum(int a, int b)
{
    return a+b;
}
