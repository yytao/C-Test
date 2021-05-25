#include  <iostream>   
using namespace std;   
int test(int a,int b);   
float testf(float a,float b);   
int main()
{   
    cout << test(1,2) << endl;
    cout << testf(2.1, 3.14)  << endl;
    cin.get();
}   

int test(int a,int b)   
{   
    return a+b;   
}   
   
float testf(float a,float b)   
{   
    return a+b;   
}
