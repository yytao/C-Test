#include <iostream>
using namespace std;
//数据类型

int main()
{

	/**
	 * 1、基本的内置类型
	 * 
	 */
	bool a = false;
	char b = 'b';
	int c = 1;
	float d = 1.1;
	double e = 2.2;
	//void f;
	wchar_t g;

	/**
	 * 2、一些基本类型可以使用一个或多个类型修饰符进行修饰
	 * 
	 */
	unsigned int h = 1; //默认signed
	short int i = 1;
	long int j = 1;

	cout << "size of char :" << sizeof(char) << endl;
	cout << "size of int :" << sizeof(int) << endl;
	cout << "size of short int :" << sizeof(short int) << endl;
	cout << "size of long int:" << sizeof(long int) << endl;
	cout << "size of float :" << sizeof(float) << endl;
	cout << "size of double :" << sizeof(double) << endl;
	cout << "size of wchar_t:" << sizeof(wchar_t) << endl;

	/**
	 * 3、typedef声明
	 * 
	 */
	typedef int feet;

	feet l = 20;
	cout << l << endl;

	/**
	 * 4、枚举类型
	 * 
	 */
	enum color
	{
		red,
		green,
		blue
	} m;

	cout << red << endl;
}
