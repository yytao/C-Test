/**
 * 数据抽象
 * 数据抽象就是指只向外界提供关键信息，并隐藏后台的实现细节
 * 数据抽象是一种依赖于接口和实现分离的编程设计技术
 * 
 */

#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
    int a;
    int b;
    double c;

    node(int aa, int bb, double cc):a(aa),b(bb),c(cc){}

};
bool aa(int a, int b);
bool cmp(node x, node y);

class Adder
{
    public:
        Adder(int i=0)
        {
            total = i;
        }

        void addNum(int number)
        {
            total += number;
        }

        int getTotal()
        {
            return total;
        }

    private:
        int total;
};


int main()
{
    Adder a;
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    cout << "Total : " << a.getTotal() << endl;


    cout << "-------------------" << endl;
    //algorithm算法模块里面的sort排序函数，默认是从小到大
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    sort(arr, arr+10, aa);
    
    for(int e:arr)
    {
        cout << e << endl;
    }


    cout << "-------------------" << endl;
    //结构体数组排序
    
    //初始化方式
    node arr2[2] = {node(5,2,3.0), node(4,5,6.0)};

    //sort结构体数组的时候，一定要有cmp这个函数控制，不然会报错
    sort(arr2, arr2+2, cmp);

    //for循环的时候也需要对应的node结构体类型的e变量来接收每个arr2里面的元素，然后打印时用.点连接来访问结构体成员
    for(node e:arr2)
    {
        cout << e.a << ',' << e.b << endl;
    }
    //done
    return 0;
}

bool cmp(node x, node y)
{
    if(x.a!=y.a) return x.a>y.a;
    if(x.a!=y.b) return x.b>y.b;

    return x.c>y.c;
}

bool aa(int a, int b)
{
    return a>b;
}