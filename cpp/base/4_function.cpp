#include <iostream>

using namespace std;
//����Ҫ��ǰ���� 


int swap(int *, int *);
int swap_(int &, int &);

int main(){
	
	int x = 1;
	int y = 2;
	
	//���õ���
	int a = swap_(x, y);
	
	//ָ����� 
	//int a = swap(&x, &y);

	cout << x << endl;
	cout << y << endl;
	
}

int swap(int *x, int *y){
	
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
	return 0;
}

int swap_(int &x, int &y){
	
	int temp;
	temp = x;
	x = y;
	y = temp;

	cout << "x=" << &x << endl;
	
	return 0;
}
