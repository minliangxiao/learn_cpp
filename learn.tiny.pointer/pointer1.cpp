//
// Created by coderSnake on 2022/8/8.
//
/*
 * 这只是一个简单的指针案例
 * */
#include <iostream>

using namespace std;

int main(){
    //定义 int 型变量 po1，赋值为 6。
    int po1=6;
    //指针变量 p 指向变量 po1 的地址。
    int *p=&po1;
    // 需要记住*是取地址中的内容 &是取地址

    cout << "获取指针所指变量的值: "<<*p<<endl;
    cout << "获取指针的内存地址: "<<&p<<endl;
    return 0;
}