#include <iostream>

using namespace std;

int getSum(int *a, int *b){
	
	*a = 4;
	return *a;
}

int * updateArr(int a[]){
	a[2] = 2;
	
	return a;
}

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
	//cout << var[2] << endl;
	
	//����ָ��
	// int (*p)[2][1];
	// int intArray[2][1] = {{1}, {2}};
	// cout << intArray[0][0] << endl;
	// p = &intArray;
	// cout << (*p+0) << endl;
	// cout << intArray << endl;


	//ָ������
	// double *p;
	// double doubleArray[10] = {1.1, 1.2};
	// p = doubleArray;
	// cout << doubleArray+1 << endl;
	// cout << &p[1] << endl;


	//�����ڴ���ָ��
	int a = 2;
	getSum(&a, &a);
	int arr[] = {1, 2, 3};
	int *b = updateArr(arr);

	cout << &b[2] << endl;
	cout << &arr[2] << endl;


}
