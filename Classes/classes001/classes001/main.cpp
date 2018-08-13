//
//  main.cpp
//  classes001
//
//  Created by Juan Davila on 8/11/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Classes Example

#include <iostream>
#include <string>
using namespace std;

class shape
{
private:
    float area;
    float perimeter;
    int count;
    
public:
    shape();
    shape(int a, int p, int cnt) ;
    void set_area(int a);
    void set_perimeter(int p);
    int set_count;
    int get_height();
    void print();
};

// Default constructor
shape::shape()
{
    area = 0;
    perimeter = 0;
    count =1;
    cout << "Initialized area:" << area  << " perimeter: " << perimeter << " count " << count << endl;
}

// constructor with
shape::shape(int a, int p, int cnt)
{
    area = a;
    perimeter = p;
    count =cnt;
    cout << "Initialized area:" << area  << " perimeter: " << perimeter << " count " << count << endl;
}

void shape::print()
{
    cout << "Area: " << area << " perimeter: " <<  perimeter << " count:" << count << "\n\n";
}

int main(int argc, const char * argv[]) {

    shape first;
    first.print();
    first = shape();
    first.print();
    
    
    return 0;
}































