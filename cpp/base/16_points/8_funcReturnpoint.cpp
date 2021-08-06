#include <iostream>
#include <ctime>
using namespace std;

//从函数返回指针

int * getRandom()
{
    static int r[10];
    srand( (unsigned)time(NULL) );

    for(int i = 0; i < 10; i++)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}

int main()
{

    int *r = getRandom();

    cout << r[0] << endl;

    cout << *(r+1) << endl;   //此时调用要把p+1用小括号括起来，意义为指针偏移之后，再用*号取指针指向的值，不然会在*p的值的基础上+1
}
