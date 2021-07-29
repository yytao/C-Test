#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    //char str1[] = "Hello C++";
    //cout << str1 << endl;

    //char name[50];
    //cin >> name;
    //cout << "你的名字是：" << name << endl;

    //cerr 对象附属到标准错误设备，通常也是显示屏，但是 cerr 对象是非缓冲的，且每个流插入到 cerr 都会立即输出。
    //char str2[] = "error message";
    //cerr << str2 << endl;

    //clog 对象是缓冲的。这意味着每个流插入到 clog 都会先存储在缓冲区中，直到缓冲填满或者缓冲区刷新时才会输出。
    char str3[] = "log message";
    clog << str3 << endl;

    

}