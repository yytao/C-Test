#include <iostream>
#include <ctime>
using namespace std;

void getSeconds(unsigned long *ptr);
double getAverage(int *, int);

int main()
{
    
    unsigned long sec;
    //传递实参sec的地址，使用&符号取地址运算
    getSeconds(&sec);
    cout << "Seconds:" << sec << endl;


    int balance[5] = {1,2,3,4,5};
    double avg;
    avg = getAverage(balance, 5);
    cout << "Average:" << avg << endl;


}

//传递一个指针，形参定义为无符号的long类型
void getSeconds(unsigned long *ptr)
{
    *ptr = time( NULL );
}

double getAverage(int *arr, int size)
{
    int sum = 0;
    double avg;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    avg = sum/size;
    return avg;
}