#include <iostream>
#include <iomanip>
using namespace std;
//存储类
void func(void);
static int countNum = 5;

int main(){

	/**
	 * C++存储类
	 * 存储类定义C++程序中变量/函数的范围（可见性）和声明周期。这些说明符放置在它们所修饰的类型之前
	 * auto
	 * register
	 * static
	 * extern
	 * mutable
	 * 
	 */

	//auto存储类：auto存储类是所有局部变量默认的存储类
	//auto int month = 3;	//C++11不再支持
	int mount = 1;
	auto month = 3;		//自动判断类型
	

	/**
	 * register存储类：register存储类用于定义存储在寄存器中而不是RAM中的局部变量，这意味着变量的大小尺寸等于寄存器的大小，
	 * 且不能对它应用一元的‘&’运算符，因为它没有内存位置
	 * 
	 */
	register int miles;
	miles = 100;
	
	int *a = &miles;		//编译器发现register变量被取地址后，register关键字的声明将变得无效
	
	cout << *a << endl;
	cout << miles << endl;

	/**
	 * static存储类
	 * static存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
	 * 因此，使用static修饰局部变量可以在函数调用之间保持局部变量的值。
	 * 
	 * static修饰符也可以用于全局变量。当static修饰全局变量时，会使变量的作用域限制在声明它的文件中。
	 * 
	 * 在C++中，当static用在类数据成员时，会导致仅有一个该成员的副本被类的所有对象共享：也就是静态数据成员的概念
	 * 
	 */
	while(countNum--)
	{
		func();
	}


	/**
	 * extern存储类
	 * extern存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。
	 * 当使用extern时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置
	 * 
	 * 当有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用extern来得到已定义的变量或函数的引用。
	 * extern是用来在另一个文件中声明一个全局变量或函数
	 * 
	 * 
	 * 
	 * 
	 */

	/**
	 * mutable存储类
	 * mutable说明符仅适用于类的对象
	 * 
	 * 
	 */






}

void func()
{
	static int j = 0;
	cout << "变量j：" << j << setw(20);
	cout << "变量countNum：" << countNum << endl;
	j++;
}

