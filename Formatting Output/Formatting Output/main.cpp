//
//  main.cpp
//  Formatting Output
//
//  Created by Juan Davila on 8/9/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Example for formatting Output
//  With integer ans strings
//  setw, fixed, showpoint, setPrecision

#include <iostream>   // ==> endl, showpoint, fixed, scientific
#include <iomanip> // for setprecision and setw
#include <string>
using namespace std;

const float PI = 3.14159265359;
const float largeNum = 1.2345678e+10;


int main(int argc, const char * argv[]) {
    
    int num1 = 15;
    float num2 = 30.05;
    float num3 = -45.05;
    string name = "Juan";
    
    for(int i=0; i< 10; i++)
    {
        cout << "i is:"<< i <<"  Begin:" << setw(i) << num1<< " " << setw(i) <<  num2 << " " << setw(i) << num3 << " " << setw(i) << name  <<  " "<< largeNum<< endl ;
    }
    cout << "\n\n\n";
    for(int i=0; i< 10; i++)
    {
        cout << "i is:"<< i <<"  Begin:" << fixed << num1<< " " << fixed <<  num2 << " " << fixed << num3 << " " << fixed << name <<  " "<< largeNum<< endl ;
    }
    
    cout << "\n\n\n";
    for(int i=0; i< 10; i++)
    {
        cout << "i is:"<< i <<"  Begin:" << showpoint << num1<< " " << showpoint <<  num2 << " " << showpoint << num3 << " " << showpoint << name <<  " "<< largeNum<< endl ;
    }
    
    cout << "\n\n\n";
    for(int i=0; i< 10; i++)
    {
        cout << "i is:"<< i <<"  Begin:" << setprecision(i) << num1<< " " << setprecision(i) <<  num2 << " " << setprecision(i) << num3 << " " << setprecision(i) << name <<  " "<< largeNum<< endl ;
    }
    
    cout << "\n\n\n";
    for(int i=0; i< 10; i++)
    {
        cout << "i is:"<< i <<"  Begin:" << scientific << num1<< " " << scientific <<  num2 << " " << scientific << num3 << " " << scientific << name <<  " "<< largeNum<< endl ;
    }
    
    return 0;
}














