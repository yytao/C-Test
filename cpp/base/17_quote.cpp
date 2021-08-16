#include <iostream>
using namespace std;

double vals[] = {10.1, 12.6};

void func(int &var);
double & setValue(int);

int main()
{
    /**
     * 引用
     * 引用运算符 &
     * 引用变量是一个别名，它是某个已存在变量的另一个名字。一旦把引用初始化某个变量，就可以使用该引用名称或变量名称来指向变量。
     * 
     * 引用很容易与指针混淆，它们之间有三个主要的不同：
     * 1、不存在空引用。引用必须连接到一块合法的内存
     * 2、一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象
     * 3、引用必须在创建时被初始化。指针可以在任何时间被初始化
     * 
     */

    //int &a;   //错误：因为引用在创建时必须被初始化

    //int &a = 2; //错误：不能把一个非静态的引用指向到一个静态值，const int &a = 2;这种语法可以


    //const int a = 2;
    //int &b = a; //错误：不能把一个const声明的静态变量的地址，初始化给一个引用(指针同理)。使用引用的初衷是为了变量的双向传递，此写法没有意义

    int a = 5;
    int *b = &a;    //指向引用的指针，其指向的最后值还是a变量存储的5
    int &c = *b;    //指向指针的引用，其指向的最后值，还是a变量存储的5

    c = 10;     //使用c修改值，打印变量a，值被修改为10

    cout << a << endl;

    //引用作为参数
    int var = 20;
    func(var);
    cout << "&var:" << var << endl;


    //从函数返回引用
    cout << "befor" << vals[1] << endl;
    setValue(1) = 2.2;
    cout << "befor" << vals[1] << endl;    //此时输出2.2
    

}

//引用作为参数
void func(int &var)
{
    var = 10;
}


double & setValue(int i)
{
    return vals[i];
}





