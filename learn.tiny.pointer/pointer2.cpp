//
// Created by coderSnake on 2022/8/8.
//
/*
 * 引用和指针
 *
可以通过 指针名=0 描述一个空指针，但不存在空引用。
指针可在任何时间进行初始化操作，而引用只能在定义时进行初始化操作。
指针变量指向内存的一个存储单元；而引用只不过是原变量的一个别名而已。
 * */
#include<iostream>
using namespace std;

int main ()
{
    int i=3;
    int j=4;
//定义引用 x，它是整型变量 i 的引用。
    int &x=i;
    //定义指针 s。
    int *s;
    //指针 s 指向整型变量 j 的地址。
    s=&j;

    cout << "初始化引用 x: " << x << endl;
    cout << "初始化指针 s: " << *s << endl;

    return 0;
}