#include <iostream>
using namespace std;

int main(){
	
	/**
	 * 1����������������
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
	 * 2��һЩ�������Ϳ���ʹ��һ�������������η���������
	 * 
	 */
	unsigned int h = 1;		//Ĭ��signed
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
	 * 3��typedef����
	 * 
	 */
	typedef int feet;

	feet l = 20;
	cout << l << endl;

	
	/**
	 * 4��ö������
	 * 
	 */
	enum color
	{
		red, green, blue
	} m;

	cout << red << endl;

	












	
} 
