//
// Created by coderSnake on 2022/8/7.
//

#include <iostream>
using namespace std;
int main(){
    // 定义一个指针 p
    int *p;
    // 动态分配一个存放整型数据的内存空间，并将其首部地址赋给指针变量p
    p = new int ;
    // 将指针指向的那块内存赋值为6
    *p = 6;
    cout<<*p<<endl;
    // 释放指针变量 p 指向的内存空间
    delete p;
    cout<< *p<<endl;
    return 0;
}