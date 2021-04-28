#include  <iostream>   
using namespace std;   
int test(int a,int b);   
float test(float a,float b);   
int main()
{   
    cout<<test(1,2) << endl;
    cout<<test(2.1, 3.14)  << endl;
    cin.get();   
}   
int test(int a,int b)   
{   
    return a+b;   
}   
   
float test(float a,float b)   
{   
    return a+b;   
}
