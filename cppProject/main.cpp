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
int  yinyong()
{
    int a = 10;
    return  a;
    
}
class point {
    point(int x = 0,int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    
public:
    int x;
    int y;
    int distacnce;
    void calcdistance(point &p);
    
};
void point::calcdistance(point &p)
{
    int distance = 0;
    distance = sqrt((this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y) );
    this->distacnce = distance;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    
    
    return 0;
}
