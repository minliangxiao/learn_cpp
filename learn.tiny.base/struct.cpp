//
// Created by coderSnake on 2022/8/7.
//
#include <iostream>

using namespace std;

/*定义一个结构体*/
struct shiyanlou{
    int a;
    int pri(){return a;}
}s1;
int  main(){
    cout<<"sbefore:"<<s1.pri()<<endl;
    s1.a=6;
    cout<<"safter:"<<s1.pri()<<endl;
}