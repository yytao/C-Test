#include <iostream>

using namespace std;

//ָ�� 
int main(){
	
	//int var1;
	//char var2[20];
	//cout << "var1�ı�����ַ��" << &var1 << endl;
	
	
	//int var = 20;
	//int *p;
	//p = &var;
	//cout << var << endl;
	//cout << p << endl;
	//cout << *p << endl;
	
	//��ָ�� 
	//int *ptr = NULL; 
	//cout << ptr;
	
	//ָ������� 
//	int var[3] = {10, 100, 200};
//	int *ptr;
//	ptr = var;
//	cout << *ptr << endl;
//	ptr++;
//	cout << *ptr << endl;
//	ptr++;
//	cout << *ptr << endl;
	
	//ָ������� 
	//int var[3] = {10, 100, 1000};
	//*(var + 2) = 500;
	
	//����ָ�� 
	int arr1[2][2] = {{1},{2}};
	int arr2[2][2] = {{3},{4}};
	
	int (*p)[2];
	
	p = arr1;
	p++;
	p = arr2;
	
	cout << p[0][0];
	
	
	
	
	
}
