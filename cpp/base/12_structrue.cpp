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
    struct Books book1, book2;
    strcpy(book1.title, "第1本书");
    strcpy(book2.title, "第2本书");
    
    printbook(book1);
    printbook(book2);
    
    struct Books *struct_pointer;
    struct_pointer = &book1;
    
    cout << "pointer: " << struct_pointer->title << endl;

}

void printbook(struct Books book)
{

    cout << book.title << endl;
}

