#include <iostream>

using namespace std;

int main(){
	
	int a = 2;
	int b = 3;
	
	if(a == b){
		cout << "���" << endl;
	}else{
		cout << "�����" << endl; 
	}
	
	if(a && b){
		cout << "�������" << endl;
	}
	
	if(a || b){
		cout << "����һ�������" << endl;
	}
	
	if(!a == false){
		cout << "�ٵ�" << endl;
	}
	
	
	string c;
	c = a?"���":"�ٵ�";
	cout << c << endl; 
	
	
	
	
	
	
} 
