//
//  main.cpp
//  cppProject
//
//  Created by 唐顺华 on 15/12/30.
//  Copyright © 2015年 Hua. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI  3.14
using namespace::std;
int  yinyong()
{
    int a = 10;
    return  a;
    
}
class mypoint {
    
    
public:
    mypoint(int x = 0,int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    int x;
    int y;
    int distacnce;
    void calcdistance(mypoint p);
    
};
void mypoint::calcdistance(mypoint p)
{
    int distance = 0;
    distance = sqrt((this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y) );
    this->distacnce = distance;
}

class circal
{
public :
    mypoint centerPoint;
    int     r ;
public:
    circal(mypoint p,int r)
    {
        this->centerPoint.x = p.x;
        this->centerPoint.y = p.y;
        this->r = r;
    }
    circal(int x,int y,int r)
    {
        this->centerPoint.x = x;
        this->centerPoint.y = y;
        this->r = r;
    }
    
    void isintersects(circal c1)
    {
        int distance = 0;
        this->centerPoint.calcdistance(c1.centerPoint);
        distance = this->centerPoint.distacnce;
        if((this->r + c1.r) < distance)
        {
            cout<<"两圆相离"<<endl;
        }
        else if((this->r + c1.r) == distance)
        {
            cout<<"两圆相切"<<endl;
        }else if((this->r + c1.r) > distance)
        {
            cout<<"两圆相交"<<endl;
            
        }

    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    mypoint p1(10,10);
    mypoint p2 = mypoint(20,10);
    p1.calcdistance(p2);
    cout<<"the distance is : "<<p1.distacnce<<endl;
    circal c1(p1, 5);
    circal c2 = circal(p2, 5);
    c1.isintersects(c2);
    return 0;
}
