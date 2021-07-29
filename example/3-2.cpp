#include <iostream>
using namespace std;

double power(double x, int m);

int main()
{

    int value = 0;
    for(int i = 7; i >= 0; i--)
    {
        char ch;
        cin >> ch;
        if(ch =='1')
            value += static_cast<int>(power(2, i));
    }

    cout << value << endl;
}

double power(double x, int n)
{
    double val = 1.0;
    while(n--)
        val *= x;
    return val;
}