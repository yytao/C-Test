#include <iostream>

using namespace std;



int main(){
	
	//������������ռ�����ֽ� sizeof
//	cout << sizeof(long long) << endl;
//	cout << sizeof(long double) << endl;

	//����forѭ��
//	int i;
//	cin >> i;
//	for(i; i>0; i--){
//		cout << i << endl;
//	}
	
	//while ѭ��
//	int i = 10;
//	while(i>0){
//		cout << i << endl;
//		i--;
//	}
	


	//while ������
//	int a,b;
//	while (cin>>a>>b){
//		cout << "��ӽ���ǣ�" << a+b<< endl;
//	}
	
	
	//forѭ���ҳ����е����� 
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
