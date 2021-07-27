#include <iostream>

using namespace std;



int main(){
	
	//测试数据类型占多少字节 sizeof
//	cout << sizeof(long long) << endl;
//	cout << sizeof(long double) << endl;

	//测试for循环
//	int i;
//	cin >> i;
//	for(i; i>0; i--){
//		cout << i << endl;
//	}
	
	//while 循环
//	int i = 10;
//	while(i>0){
//		cout << i << endl;
//		i--;
//	}
	


	//while 计算器
//	int a,b;
//	while (cin>>a>>b){
//		cout << "相加结果是：" << a+b<< endl;
//	}
	
	
	//for循环找出所有的素数 
    int i;
    for (i=2; i <=100; i++)
    {
        int j = 2;
        for (; j<i; j++)
        {
            if (i%j == 0)
                break;
        }
        
        if (j>=i)
        {
            cout << i << endl;
        }
    }
	
} 
