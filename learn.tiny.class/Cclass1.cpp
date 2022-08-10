//
// Created by coderSnake on 2022/8/8.
//
/*
 * 构造函数和析构函数

在栈上实例化的对象，超出定义域对象资源会自动被系统回收。
在堆上实例化的对象，最后需要使用 delete 关键字来释放内存，否则会造成内存泄漏。
使用栈实例化的对象使用 “.” 来访问数据成员或成员函数，在堆上实例化的对象使用 “->” 来访问数据成员或成员函数。
释放完内存后将对象置空，防止野指针。

 * */
#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    Student(){
        cout<<"我被创建了"<<endl;
    };
    ~Student(){
        cout<<"im dead"<<endl;
    };

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Student::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Student::age = age;
    }

private:
    string name;
    int age;
};

int main(){
    // 栈上实列化对象
    Student stu;
    stu.setAge(11);
    stu.setName("growpyb");
    cout << "My name is " << stu.getName() << ", I'm " << stu.getAge() << " years old." << endl;
    //堆上实列化对象
    Student *stu2 = new Student;
    // 访问
    stu2->setName("Siri");
    stu2->setAge(5);
    cout << "My name is " << stu2->getName() << ", I'm " << stu2->getAge() << " years old." << endl;
    // 释放内存
    delete stu2;
    stu2 = nullptr;

    return 0;
}