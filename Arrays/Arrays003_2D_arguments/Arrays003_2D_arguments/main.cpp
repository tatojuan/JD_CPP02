//
//  main.cpp
//  Arrays003_2D_arguments
//
//  Created by Juan Davila on 8/12/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Passing arrays 2D arrays as arguments

#include <iostream>
#include <string>
using namespace std;

void printArray(char ascii[][11], int numberOfElements)
{
    for(int i = 0; i < 10; i++)
    {
        for(int x = 0 ; x < 11 ; x++)
        {
            cout << "x[" << x  << "]: "<< ascii[i][x] << ", ";
        }
        cout << endl;
    }
    cout << "\nArray is initialized \n\n\n";
}


int main(int argc, const char * argv[]) {
    
    
    char ascii[10][11];
    int numberOfElements = 10;
    int num = 0;
    for(int i = 0 ; i < 10; i++)
    {
        for(int x = 0 ; x < 11 ; x++)
        {
        ascii[i][x]= (char)num;
            num++;
        }
    }
    
    
    printArray(ascii, numberOfElements);
    
    
    
    return 0;
}

