#include <iostream>
using namespace std;

int main(){
	/**
	 * 修饰符类型
	 * signed
	 * unsigned
	 * long
	 * short
	 * 
	 * 修饰符signed、unsigned、long和short可引用与整型，signed和unsigned可应用于字符型，long可应用于双精度类型
	 * 修饰符signed和unsigned也可以作为long或short修饰符的前缀，例如：unsigned long int
	 * C++允许使用速记符号来声明无符号短整数和无符号长整数。可以不写int，只写单词unsigned short或unsigned long，int是隐含的。
	 * 
	 * 
	 * 
	 */

	short i;					//有符号整数
	short unsigned int j;		//无符号整数

	j = 50000;
	i = j;
	cout << i << endl;
	cout << j << endl;


	/**
	 * C++中的类型限定符
	 * const		//const类型的对象在程序执行期间不能被修改改变
	 * volatile		//修饰符volatile告诉编译器，变量的值可能以程序未明确指定的方式被修改
	 * restrict		//由restrict修饰的指针是唯一一种访问它所指向的对象的方式，只有C99增加了新的类型限定符restrict
	 * 
	 */

	


}
