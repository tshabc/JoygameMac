//
//  copyconstructor.cpp
//  cppProject
//
//  Created by 唐顺华 on 15/12/31.
//  Copyright © 2015年 Hua. All rights reserved.
//
/*
#include "copyconstructor.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;
class Student {
public: Student(int age)
    {
        this->age = age;
        cout<<"构造学生 :\t"<<age<<endl;
    }
    ~Student()
    {
        cout<<"析构学生 ：\t"<<this->age<<endl;
        
    }
public:
    int age;
    
};

class Teacher {
public:
    Teacher(int age,int stu1,int stu2):stu{stu1,stu2}
    {
        this->age = age;
        cout<<"构造老师 :\t"<<age<<endl;
    }
    ~Teacher()
    {
        cout<<"析构老师 ：\t"<<this->age<<endl;
    }
    Teacher(const Teacher &tempT):stu{11,14}
    {
        cout<<"赋值构造 Teacher"<<endl;
    }
    
    
    
    
public:
    int age;
    Student stu[2];
};
Teacher  testConstructor(Teacher &t)
    {
        Teacher tempT(5,2,3);
        
        return tempT;
    }
        
int main02()
{
    Teacher t(20,10,12);
    Teacher t2 = testConstructor(t);
    t2 = t;
    return 0;
} */