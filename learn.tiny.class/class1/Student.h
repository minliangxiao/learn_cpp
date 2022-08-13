//
// Created by coderSnake on 2022/8/10.
//

#ifndef LEARN_CPP_STUDENT_H
#define LEARN_CPP_STUDENT_H

#endif //LEARN_CPP_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student();

    ~Student();

    void setName(string name);

    string getName() const;

    void setAge(int age);

    int getAge() const;

private:
    string name;
    int age;
};
