//
//  main.cpp
//  Arrays001
//
//  Created by Juan Davila on 8/11/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Array Example

#include <iostream>
using namespace std;

int main() {
    cout << "in here \n\n";
    int myarr[ 5 ] ;
    cout << "in here \n\n";
    myarr[0] = 10;
     myarr[1] = 20;
     myarr[2] = 30;
     myarr[3] = 40;
     myarr[4] = 50;
    
    for(int i = 0 ; i < 5; i++)
    {
        cout << myarr[i] << " " ;
    }
    
    
    for(int i = 0 ; i < 5; i++)
    {
        myarr[i] = i;
    }
    
    for(int i = 0 ; i < 5; i++)
    {
        cout << myarr[i] << " " ;
    }
    
    cout << "\n\n";
    return 0;
}













