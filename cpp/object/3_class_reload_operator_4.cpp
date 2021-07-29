/**
 * 1、重载下标运算符[]，传递数字下标，获取元素
 * 
 */

#include <iostream>
using namespace std;
const int SIZE = 10;

class safearray
{
    private:
        int arr[SIZE];
    
    public:
        safearray()
        {
            register int i;
            for(i=0; i < SIZE; i++)
            {
                arr[i] = i;
            }
        }

        int &operator [](int i)
        {
            if(i > SIZE)
            {
                cout << "索引超过最大值" << endl;
                return arr[0];
            }

            return arr[i];
        }
};


int main()
{
    safearray A;

    cout << A[2] << endl;
    cout << A[11] << endl;

}
