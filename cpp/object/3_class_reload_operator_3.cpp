/**
 * 1、重载前缀自增
 * 2、重载后缀自增
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    public:
        Time()
        {
            hours = 0;
            minutes = 0;
        }
        Time(int h, int m)
        {
            hours = h;
            minutes = m;
        }

        void displayTime()
        {
            cout << "H:" << hours << setw(5) << "S:" << minutes << endl;
        }

        Time operator ++()  //重载前缀递增运算符
        {
            ++minutes;
            if(minutes >= 60)
            {
                ++hours;
                minutes -= 60;
            }
            cout << "++n" << endl;
            return Time(hours, minutes);
        }

      Time operator++( int )    //重载后缀递增运算符
      {
            ++minutes;
            if(minutes >= 60)
            {
                ++hours;
                minutes -= 60;
            }
            cout << "n++" << endl;
            return Time(hours, minutes);
      }

    private:
        int hours, minutes;
};

int main()
{
    Time a(12, 0), b(10, 40);

    ++a;
    a.displayTime();
    ++a;
    a.displayTime();

    b++;
    b.displayTime();
    b++;
    b.displayTime();
}