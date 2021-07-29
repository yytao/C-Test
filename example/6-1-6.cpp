#include <iostream>
using namespace std;
//基于范围的for循环
int main()
{

    int arr[] = {1, 2, 3};

    cout << sizeof(arr) << endl;
    
    int *p;
    for(p = arr; p < arr + sizeof(arr)/sizeof(int); p++)
    {
        cout << *p << endl;
    }


    cout << "-------" << endl;
    //注意：括号内可以直接用int类型的变量，但是为了节省资源，使用引用类型存储地址
    for(int & e: arr)
    {    
        cout << e << endl;
    }

}