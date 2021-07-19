/*
 *
 * Time：2021-6-1
 * Mark：
 * 1、拷贝构造函数
 * 
 */
#include <iostream>
using namespace std;

class CExample
{
    private:
        int a;

    public:
        CExample(int b)
        {
            a =  b;
        }

        void show()
        {
            cout << a << endl;
        }
    
};

class Line
{
    public:
        int getLength();
        Line( int len);
        Line( const Line &obj);
        ~Line();

    private:
        int *ptr;

};

Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line()
{
    cout << "Freeing memory" << endl;
    delete ptr;
}

int Line::getLength()
{
    return *ptr;
}

void display(Line obj)
{
    cout << obj.getLength() << endl;
}

int main()
{
    // CExample A(100);
    // CExample B = A;
    // B.show();
    
    Line line(10);

    display(line);

    return 0;
}
