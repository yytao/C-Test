/**
 * 1、重载运算符减号、小于号
 * 2、重载cin以及cout
 * 3、重载等于号=，与复制构造函数功能类似
 * 4、重载（），作用：在对象初始化之后，可再次初始化对象内的属性值
 * 
 */ 

#include <iostream>
#include <iomanip>
using namespace std;

class Distance
{
    public:
       Distance(int setFeet=0, int setInches=0):feet(setFeet),inches(setInches){}; 

    void displayDistance()
    {
        cout << "F:" << feet << setw(5) << "I:" << inches << endl;
    }

    Distance operator-()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }

    bool operator <(const Distance &p)
    {
        if(feet < p.feet)
        {
           return true; 
        }

        if(feet == p.feet && inches < p.inches)
        {
            return true;
        }

        return false;
    }

    friend ostream &operator <<(ostream &output, const Distance &D)
    {
        output << "F : " << D.feet << " I : " << D.inches;
        return output;
    }

    friend istream &operator >>(istream &input, Distance &D)
    {
        input >> D.feet >> D.inches;
        return input;
    }

    void operator=(const Distance &a)
    {   
        //相当于复制构造函数
        feet = a.feet;
        inches = a.inches*10;
    }

    Distance operator()(int a,int b,int c)
    {
        Distance D;
        D.feet = a+b+c;
        D.inches = b+c+100;
        return D;
    }

    private:
        int feet;
        int inches;
};


int main()
{

    Distance a(3, 3), b(2, 4), c;
    
    //重载关系运算符
    // if(a < b)
    // {
    //     cout << "a less than b" << endl;
    // } else {

    //     cout << "b less than a" << endl;
    // }

    //重载输入/输出运算符
    // cin >> c;
    // cout << c << endl;


    //重载赋值运算符    相当于复制构造函数
    //a = b;
    //a.displayDistance();

    //重载函数调用运算符（）：创建一个类返回复制给c，这个时候会调用复制构造函数
    c = a(10,10,10);
    c.displayDistance();

    

}