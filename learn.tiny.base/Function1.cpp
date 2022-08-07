//
// Created by coderSnake on 2022/8/7.
//
/*
 * 参数传递
 * 形参和实参的区别
 * 引用传递
 * */

#include <iostream>

using namespace std;
void swap( int a,int b){
    int t = a;
    a= b;
    b= t;
}
// 引用传递
void swap1(int &a,int &b){
    int t = a;
    a= b;
    b= t;
}

int main(){

    int x= 3,y=5;
    cout<<"原始参数";
    cout<<"x:"<<x<<","<<"y:"<<y<<endl;
    // 形参调用
    swap(x,y);
    cout<<"x="<<x<<","<<"y:"<<y<<endl;
    // 引用传递
    swap1(x,y);
    cout<<"x="<<x<<","<<"y:"<<y<<endl;


}
