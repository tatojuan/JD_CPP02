//
//  main.cpp
//  CPP_DataTypes
//
//  Created by Juan Davila on 8/8/18.
//  Copyright © 2018 Davila. All rights reserved.
//  I am practicing c++ Data types
//

#include <iostream>
#include <string> // need this to include char
using namespace std;



int main(int argc, const char * argv[]) {
    
    
    /*
     Char
     Unsigned Char
     Short
     Unsinged Short
     int
     unsigned int
     long
     unsigned long
     float
     double
     long double
*/
    char myChar = ' ';
    cout << "The space char is:\"" << myChar << "\", the size of the char is: " << sizeof(myChar)  << "\n\n" << endl;
    
    unsigned char myUnChar = ' ';
    cout << "The space unsigned char is:\"" << myUnChar << "\", the size of the unsigned char is: " << sizeof(myUnChar)  << "\n\n" << endl;
    
    short myShort = 0;
    cout << "The short number is: " << myShort << ", the size of the short is: " << sizeof(myShort)  << "\n\n" << endl;
   
    unsigned short myUnShort = 0;
    cout << "The Unsigned short number is: " << myUnShort << ", the size of the unsigned short is: " << sizeof(myUnShort)  << "\n\n" << endl;
    
    int myInt = 0;
    cout << "The int number is: " << myInt << ", the size of the int is: " << sizeof(myInt)  << "\n\n" << endl;
    
    unsigned int myUnInt = 0;
    cout << "The unsigned int number is: " << myInt << ", the size of the Unsigned int is: " << sizeof(myUnInt)  << "\n\n" << endl;
    
    long myLong = 0;
    cout << "The long number is: " << myLong << ", the size of the Long is: " << sizeof(myLong)  << "\n\n" << endl;
    
    unsigned long myUnLong = 0;
    cout << "The unsigned long number is: " << myUnLong << ", the size of the Unsigned Long is: " << sizeof(myUnLong)  << "\n\n" << endl;
    
    float myFloat = 0;
    cout << "The float number is: " << myFloat << ", the size of the Float is: " << sizeof(myFloat)  << "\n\n" << endl;
    
    double myDouble = 0;
    cout << "The double number is: " << myDouble << ", the size of the Double is: " << sizeof(myDouble)  << "\n\n" << endl;
    
    long double myLongDouble = 0;
    cout << "The Long double number is: " << myLongDouble << ", the size of the Long Double is: " << sizeof(myLongDouble)  << "\n\n" << endl;
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
