#include <iostream>
using namespace std;

int main()
{




    /**
     * 指针数组
     * 一维指针数组就是每个元素是一个指针，指向对应内存地址的值。
     * 
     * 可以设置二维指针数组，指针元素为一维数组的起始内存地址，这样的话每一行数据的存储空间可能不是连续存储的。
     * 
     */

    int arr4[3] = {1,2,3};
    int *ptr4[3];
    ptr4[0] = &arr4[0];
    cout << ptr4[0] << endl;

    int arr5[3] = {4,5,6};
    int *ptr5[2];
    ptr5[0] = arr4;
    ptr5[1] = arr5;
    cout << ptr5[1][1] << endl;





}