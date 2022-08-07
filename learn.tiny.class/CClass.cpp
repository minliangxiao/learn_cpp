//
// Created by coderSnake on 2022/8/7.
//
/*
 * c++中的class与java中的class机制非常相像
 * */
#include <iostream>

using namespace std;

class area {
//  定义公有成员  这种写法java中没有
public:
    double width;
    double length;
// 定义被保护的成员变量（能被子类访问）
protected:
    double width1;

};
// c++ 里面的继承机制是 子类:父类
class squareArea:area{
// 定义公有变量
public:
    // 定义公有的方法（可以按照java的接口写法 先写接口实现后面写）
    void setSquareWidth(double wid){
        width1 = wid;
    };
    double getSquareWidth(){
       return width1;
    };

};
// 也可以在类外面这样写类函数
/*
 *
 void area::setWidth(double wid)
{
    函数体
}
 * */

int main() {
    // 定义对象（相当于java的声明对象）
    area area;
    double AREA;
    // 由于类变量是public修饰的 所以外部是可以 访问赋值的
    area.width = 3;
    area.length = 3.1;
    AREA = area.length * area.width;
    cout << AREA << endl;
    //定义对象。
    squareArea square;
    //设置宽度为 3.1。
    square.setSquareWidth(3.1);
    //输出设置的宽度。
    cout <<"width:"<<square.getSquareWidth()<<endl;

}

