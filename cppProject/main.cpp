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
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    mypoint p1(10,20);
    mypoint p2 = mypoint(30,40);
    p1.calcdistance(p2);
    cout<<"the distance is : "<<p1.distacnce<<endl;
    
    return 0;
}
