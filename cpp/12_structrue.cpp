#include <iostream>
#include <cstring>
using namespace std;

void printbook(struct Books);

struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main()
{
    struct Books book;

    strcpy(book.title, "张三的书");

    cout << book.title << endl;

}

