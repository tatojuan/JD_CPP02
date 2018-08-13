//
//  main.cpp
//  Arrays002_arguments
//
//  Created by Juan Davila on 8/12/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Passing arrays as arguments

#include <iostream>
#include <string>
using namespace std;

void printArray(char alphabet[], int numberOfElements)
{
    for(int i = 0; i < numberOfElements; i++)
    {
        cout << alphabet[i] << ", ";
    }
    cout << "\nArray is initialized \n\n\n";
}


int main(int argc, const char * argv[]) {

    char alphabet[26];
    int numberOfElements = 26;
    
    for(int i = 97; i < 123; i++)
    {
        alphabet[i-97] = (char)i;
    }
    

    printArray(alphabet, numberOfElements);
    
    
    
    return 0;
}
