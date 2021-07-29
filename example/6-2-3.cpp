#include <iostream>
#include <iomanip>
using namespace std;

void splitFloat(float x, int *intPart, float *floatPart)
{
    *intPart = static_cast<int>(x);
    *floatPart = x-*intPart;
}

int main()
{   

    int a;
    int b;
    int *c = &a;

    *c = 1;
    cout << *c << endl;

    const int * b1 = &a;
    a = 2;
    
    cout << *b1 << endl;

    return 0;

    cout << "Enter 3 float point number:" << endl;
    for(int i=0; i<3; i++)
    {
        float x,f;
        int n;

        cin >> x;
        splitFloat(x, &n, &f);
        cout << "Integer Part:" << n << setw(15) << "Float Part:" << f <<endl;
        
        return 0;
    }
    
}