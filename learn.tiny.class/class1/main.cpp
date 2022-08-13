//
// Created by coderSnake on 2022/8/10.
//
/*
 * 执行这个文件需要联合编译Student.cpp
 * g++ main.cpp Student.cpp -o main
 * */
#include <iostream>
#include "Student.h"

int main()
{
    Student stu;
    stu.setName("jake");
    stu.setAge(15);
    cout << "My name is " << stu.getName() << ", I'm " << stu.getAge() << " years old." << endl;
    return 0;
}