#include <iostream>
using namespace std;
//变量类型

extern int e;
extern float f;

//函数声明：其实就是前置声明，告诉编译器有这么个函数，实际定义可以在任何地方进行
int sum();

int main()
{
	/**
	 * 1、C++变量类型
	 * 基本变量类型
	 * 其他类型：枚举、指针、数组、引用、数据结构
	 */

	int a, b, c;
	int d = 3;

	cout << a << endl; //没有赋初始值的话，会出现预想不到的数字
	cout << d << endl;

	/**
	 * 2、C++中的变量声明
	 * extern 关键词
	 * 
	 */
	int e = 1;
	float f = 2.2;

	cout << e << endl;
	cout << f << endl;

	e = sum();
	cout << e << endl;

	/**
	 * 3、C++中的左值（Lvalues）和右值（Rvalues）
	 * 左值：指向内存地址位置的表达式被称为左值表达式，左值可以出现在赋值号的左边或右边
	 * 右值：术语右值指的是存储在内存中某些地址的值，右值是不能对其进行赋值的表达式，右值可以出现在赋值号的右边，但不能出现在左边
	 * 
	 */
	int g = 20;
}

int sum()
{
	return 10;
}
