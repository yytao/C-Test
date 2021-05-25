#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    typedef struct
    {
        char title[50];
        char author[50];
        char subject[50];
        int book_id;
    }book;


    book Book1;

    strcpy(Book1.title, "张三的书");

    cout << Book1.title << endl;


}