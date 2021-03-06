#include <iostream>
using namespace std;

int main()
{
    /**
     * 运算符
     * 1、算数运算符
     * 2、关系运算符
     * 3、逻辑运算符
     * 4、位运算符
     * 5、赋值运算符
     * 6、杂项运算符
     * 
     * 
     */

    /**
     * 算数运算符   ：返回值由数据类型优先级决定
     * +、-、*、/、%、++、--
     * 
     */

    /**
     * 关系运算符   ：返回值为bool类型
     * ==、！=、>、<、>=、<=
     * 
     */

    /**
     * 逻辑运算符   ：返回值同算数运算符
     * &&、||、!
     * 
     */

    /**
     * 位运算符     ：二进制数操作
     * &、|、^、~、<<、>>
     * 
     * &：两数二进制对应位同为1取1，同逻辑运算与
     * |：两数二进制对应位有1则取1，同逻辑运算或
     * ^：（异或）两数二进制对应位相同则取0，不同则取1
     * ~：（取反：补码运算符）将一个数的二进制位取反，0为1，1为0
     * <<：（左移）举例：0011 1100 左移2位得到：1111 0000
     * >>：（右移）举例：0011 1100 右移2位得到：0000 1111
     * 
     */

    /**
     * 赋值运算符
     * =、+=、-=、*=、/=、%=
     * <<= 
     * >>= 
     * &= 
     * ^= 
     * |= 
     * 
     * 
     */

    /**
     * 杂项运算符
     * sizeof   返回变量的大小（字节数）
     * ?:   条件运算符
     * ,    逗号运算符：以逗号隔开的表达式会按序执行
     * .    成员运算符：用于引用类、结构和共用体的成员
     * cast 强制转换运算符：把一种数据类型转换为另一种数据类型
     *      1、const_cast<type>(expr)：const_cast运算符用于修改类型的const/volatile属性。除了const/volatile属性之外，目标类型必须与源类型相同。
     *      这种类型的转换主要用来操作所传对象的const属性，可以加上const属性，也可以去掉const属性
     *      
     *      2、dynamic_cast<type>(expr)：在运行时执行转换，验证转换的有效性。如果转换未执行，则转换失败，表达式expr被判定为null，
     *      dynamic_cast执行动态转换时，type必须是类的指针、类的引用或者void*，如果type是类指针类型，那么expr也必须是一个指针，如果type是引用，
     *      那么expr也必须是一个引用
     *      
     *      3、reinterpret_cast<type>(expr)：reinterpret_cast运算符把某种指针改为其他类型的指针。它可以把一个指针转换为一个整数，也可以把一个整数
     *      转换成一个指针。
     * 
     *      4、static_cast<type>(expr)：static_cast运算符执行非动态转换，没有运行时类检查来保证转换的安全性。例如，它可以用来把一个基类指针转换为
     *      派生类指针。
     * 
     * &    指针运算符：返回变量的地址。例如：&a，返回a变量的内存地址
     * *    指针运算符：指向一个变量。例如：*var，将指向变量var，返回的是该指针指向的内存地址存储的值
     * 
     */
}