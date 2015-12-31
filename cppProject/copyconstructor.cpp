//
//  copyconstructor.cpp
//  cppProject
//
//  Created by 唐顺华 on 15/12/31.
//  Copyright © 2015年 Hua. All rights reserved.
//

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
        cout<<"构造学生 :\t\n"<<age<<endl;
    }
    ~Student()
    {
        
        
    }
public:
    int age;
    
};

class Teacher {
public:
    Teacher(int age,int stu1,int stu2):stu{stu1,stu2}
    {
        this->age = age;
        cout<<"构造老师"<<endl;
    }
    ~Teacher()
    {
        
    }
    Teacher(const Teacher &tempT):stu{11,14}
    {
        cout<<"赋值构造 Teacher"<<endl;
    }
    
    
    
    
public:
    int age;
    Student stu[2];
};

int main()
{
    Teacher t(20,10,12);
    
    
    return 0;
}