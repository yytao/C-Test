#include <iostream>
using namespace std;

class printData
{
    public:
        void print(int i)
        {
            cout << "Printing int: " << i << endl;
        }
        void print(double f)
        {
            cout << "Printing double: " << f << endl;
        }
        void print(char * const c)
        {
            //const char a[] = "Hello";
            //a[0] = 'a';
            //cout << a << endl;
            char a[10] = "123456";
            char * const d = a;
            *(d+1) = 'a';
            
            cout << "Printing char: " << d << endl;
        }
};

int main()
{
    printData pd;

    pd.print(5);
    pd.print(5.5);
    pd.print("Hello C++");

}












