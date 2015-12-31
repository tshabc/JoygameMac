//
//  copyConstrTwo.cpp
//  cppProject
//
//  Created by 唐顺华 on 15/12/31.
//  Copyright © 2015年 Hua. All rights reserved.
//

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
    Student()
    {
        
    }
public:
    int age;
    
};

class Teacher {
public:
    Teacher(int age,int stu1)
    {
        this->age = age;
        cout<<"构造老师 :\t"<<age<<endl;
        }
        ~Teacher()
        {
            cout<<"析构老师 ：\t"<<this->age<<endl;
        }
    Teacher(const Teacher &tempT)
    {
        age = tempT.age;
            cout<<"赋值构造 Teacher"<<endl;
        }
    Teacher ()
    {
        
    }
    public:
        int age;
        //Student stu;
};
Teacher  testConstructor()
{
        Teacher tempT(5,2);
            
        return tempT;
}
void pushIn(Teacher p)
{
    cout<<"传入参数 :\t"<<p.age<<endl;
}
int main()
{
        Teacher t(20,10);
        Teacher t2 = t;  //赋值构造函数的第一种应用场景 ，用一个已经存在的对象来初始化另一个新建的对象
        Teacher t5(t);   //赋值构造函数的第二种应用场景 ，用一个已经存在的对象来初始化另一个新建的对象
    cout<<"t5.age = \t"<<t5.age<<endl;
        Teacher &t3 = t2;
        Teacher t4 = testConstructor();
        pushIn(t3);
        return 0;
}