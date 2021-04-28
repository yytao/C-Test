#include <iostream>

using namespace std;

int main(){
	
	int a = 2;
	int b = 3;
	
	if(a == b){
		cout << "相等" << endl;
	}else{
		cout << "不相等" << endl; 
	}
	
	if(a && b){
		cout << "都是真的" << endl;
	}
	
	if(a || b){
		cout << "其中一个是真的" << endl;
	}
	
	if(!a == false){
		cout << "假的" << endl;
	}
	
	
	string c;
	c = a?"真的":"假的";
	cout << c << endl; 
	
	
	
	
	
	
} 
