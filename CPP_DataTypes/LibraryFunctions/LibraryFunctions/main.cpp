//
//  main.cpp
//  LibraryFunctions
//
//  Created by Juan Davila on 8/8/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Library function examples

#include <iostream>
#include <cstdlib> // abs(int), labs(long)
#include <cmath> // cos(float), fabs(float), pow(float, float), sin(float), sqrt(float)
using namespace std;

int main(int argc, const char * argv[]) {

    int ten = 10;
    int tenNeg = -10;
    long longten = 10;
    long longtenNeg = -10;
    float five = 5.0;
    float fiveNeg = -5.0;
    
    cout << "absolute val:" << abs(ten) << "\n\n";
    cout << "absolute val:" << abs(tenNeg) << "\n\n";
    cout << "absolute val:" << abs(longten) << "\n\n";
    cout << "absolute val:" << abs(longtenNeg) << "\n\n";
    cout << "Cos val:" << cos(five) << "\n\n";
    cout << "Cos val:" << cos(fiveNeg) << "\n\n";
    cout << "absolute val:" << fabs(five) << "\n\n";
    cout << "absolute val:" << fabs(fiveNeg) << "\n\n";
    cout << "Pow val:" << pow(five, five) << "\n\n";
    cout << "Pow val:" << pow(fiveNeg, fiveNeg) << "\n\n";
    cout << "Sin val:" << sin(five) << "\n\n";
    cout << "Sin val:" << sin(fiveNeg) << "\n\n";
    cout << "square root val:" << sqrt(five) << "\n\n";
    cout << "square root val:" << sqrt(fiveNeg) << "\n\n";
    
    
    return 0;
}



















