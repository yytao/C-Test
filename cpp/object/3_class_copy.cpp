/*
 *
 * Time：2021-6-1
 * Mark：
 * 1、拷贝构造函数
 * 
 */
#include <iostream>
using namespace std;

class CExample
{
    private:
        int a;

    public:
        CExample(int b)
        {
            a =  b;
        }

        void show()
        {
            cout << a << endl;
        }
    
};

int main()
{
    CExample A(100);
    CExample B = A;
    B.show();
    
    return 0;
}