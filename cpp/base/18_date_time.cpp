#include <iostream>
#include <ctime>
using namespace std;

//结构体
// struct tm
// {
//     int tm_sec;     //秒，正常范围从0到59，但允许值61
//     int tm_min;     //分，范围从0到59
//     int tm_hout;    //小时，范围从0到23
//     int tm_mday;    //一月中的第几天，范围从1到31
//     int tm_mon;     //月，范围从0到11
//     int tm_year;    //自1900年起的年数
//     int wday;       //一周中的第几天，范围从0到6，从星期日算起
//     int yday;       //一年中的第几天，范围从0到365，从1月1日算起
//     int tm_isdst;   //是否夏令时
// };

/**
 * C++标准库没有提供所谓的日期类型。C++继承了C语言用于日期和时间操作的结构和函数。为了使用日期和时间相关的结构和函数，需要在程序中引用<ctime>头文件
 * 有四个与时间相关的类型：clock_t、time_t、size_t和tm。类型clock_t、time_t、size_t能够把系统时间和日期表示为某种整数
 * 结构类型tm把日期和时间以C结构的形式保存
 * 
 */    
int main()
{

    time_t now = time(0);
    
    char* dt = ctime(&now);
    

    cout << "本地日期和时间：" << dt << endl;

}