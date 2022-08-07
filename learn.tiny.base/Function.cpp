//
// Created by coderSnake on 2022/8/7.
//
/*这个列字是想说明c++方法可以先声明后调用在写具体实现*/
#include <iostream>

using namespace std;
// 有点像java中的接口
int add(int a ,int b);

int main(){
    int x,y;
    cout<<"input x and y:";
    cin>>x>>y;
    int c = add(x,y);
    cout<<c<<endl;
    return 0;
}
int add(int x,int  y){
    return x+y;
}