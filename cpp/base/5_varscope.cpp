#include <iostream>
using namespace std;
//主题：变量作用域

//全局变量：定义全局变量时，如果未初始化，int类型则默认值是0，局部变量的int则是意想不到的错误数字
int g = 20;

int main()
{
	/**
	 * 1、C++变量作用域
	 * 1.1 在函数或一个代码块内声明的变量，称为局部变量
	 * 1.2 在函数参数的定义中声明的变量，称为形式参数
	 * 1.3 在所有函数外部声明的变量，称为全局变量
	 * 
	 */

	// 局部变量声明
	int a, b;
	int c;

	//实际初始化
	a = 1;
	b = 2;
	c = 3;

	cout << c << endl;

	//全局变量g初始值为20，局部变量可以重新声明定义，不会报错，但是定义同名的变量之后，全局变量便不可见了，此时g变量的值为10
	int g = 10;
	cout << g << endl;

	//可以调用全局变量
	g = a + b;
	cout << g << endl;
}
