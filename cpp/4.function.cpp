#include <iostream>

using namespace std;
//必须要提前声明 


int swap(int *, int *);

int main(){
	
	int x = 1;
	int y = 2;
	
	//引用调用
	//int a = swap_(x, y);
	
	//指针调用 
	int a = swap(&x, &y);
	
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
	
	return 0;
}
