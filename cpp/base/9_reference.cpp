//引用
#include <iostream>
using namespace std;

int swap(int& x, int& y){

    int temp;
    temp = y;
    y = x;
    x = temp;

    return 0;
}

int main(){

    int x = 100;
    int y = 200;

    swap(x, y);

    cout << &x << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

}