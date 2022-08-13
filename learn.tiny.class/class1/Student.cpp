//
// Created by coderSnake on 2022/8/10.
//

#include "Student.h"
Student::Student()
{
}

Student::~Student()
{
}

void Student::setName(string name)
{
    this->name = name;
}

string Student::getName() const
{
    return name;
};


void Student::setAge(int age)
{
    this->age = age;
}

int Student::getAge() const
{
    return age;
}