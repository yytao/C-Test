#include <iostream>
using namespace std;
//字符串
int main()
{
    /**
     * C++提供了两种类型的字符串表示形式
     * 1、C风格的字符串
     * 2、C++引入的string类型
     */


    /**
     * C风格字符串
     * 字符串实际上是使用null字符终止的一维字符数组。因此一个以null结尾的字符串，包含了组成字符串的字符
     * 
     * 
     * 
     * 
     */
    char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << greeting << endl;       //注意：这里是会输出完整hello的



    /**
     * C++中的string类
     * 
     * 
     */
    string str1 = "hello";
    string str2 = "world";

    cout << (str1 + str2).size() << endl;




    

}