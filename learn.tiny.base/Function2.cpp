//
// Created by coderSnake on 2022/8/7.
//

/*默认参数
 * 函数重载
 * */

#include <iostream>

using namespace std;
// 默认函数 (这个机制java 只能通过函数重载去实现)
int add(int  a , int  b= 5){
    return a+b;
}

// 函数重载（java 也有这个机制，重载的定义是同一个类中的同名不同参数（参数类型）函数）
//定义双精度型函数 add。
double add(double a,double b){
    double c;
    c = a + b;
    return c;
}

int main(){
    int a,b;
    cout<<"input a b："<<endl;
    cin>>a>>b;
    //此时调用的 add 函数将 b 的值缺省，使之为默认参数。
    cout<<"a + b(default) = "<<add(a)<<endl;
    cout<<"a + b = "<<add(a,b)<<endl;
    // 调用函数重载
    cout<<"a + b = "<<add(3.111,4.222)<<endl;//调用双精度型函数 add。
}