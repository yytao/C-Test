#include <iostream>
using namespace std;
#include <ctime>

int main()
{
    //获取c++当前时间戳
    time_t now = time(0);

    //将时间戳变量地址传入ctime内，获取日期
    char* dt = ctime(&now);

    cout << "localtime:" << dt << endl;

    //将时间戳变量地址传入gmtime内，获取UTC格式日期
    tm* tmgm = gmtime(&now);

    /*
    struct tm {
        int tm_year;    // 自 1900 年起的年数
        int tm_mon;     // 月，范围从 0 到 11
        int tm_wday;    // 一周中的第几天，范围从 0 到 6，从星期日算起
        int tm_mday;    // 一月中的第几天，范围从 1 到 31
        int tm_yday;    // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
        int tm_hour;    // 小时，范围从 0 到 23
        int tm_min;     // 分，范围从 0 到 59
        int tm_sec;     // 秒，正常范围从 0 到 59，但允许至 61
        int isdst;      // 是否夏令时
    }
    */

    //将结构体传入，返回一个C字符串
    dt = asctime(tmgm);

    cout << 1900+tmgm->tm_year << endl;
    cout << 1+tmgm->tm_mon << endl;     //月份+1    0-11
    cout << tmgm->tm_mday << endl;
    cout << 8+tmgm->tm_hour << endl;    //时区+8    东八区
    cout << tmgm->tm_min << endl;
    cout << tmgm->tm_sec << endl;
    cout << tmgm->tm_isdst << endl;

    cout << "UTC time:" << dt << endl;
    return 0;
}