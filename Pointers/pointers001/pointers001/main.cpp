//
//  main.cpp
//  pointers001
//
//  Created by Juan Davila on 8/10/18.
//  Copyright © 2018 Davila. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int num1 = 100;
    cout << "The number is:" << num1 <<endl;
    cout << "The number is:" << &num1 << "\n\n";
    
    cout << "I am here 2" << endl << endl;
    
    
    int* num2;
    //  int *num2 = 200;                     // not valid
   //  num2 = 200;                          // not valid
    //  &num2 = 200;                        // not valid
    *num2 = 200;
    cout << "The number is:" << num2 <<endl;
    cout << "The number is:" << *num2 <<endl;
    cout << "The number is:" << &num2 <<"\n\n";
    
    num2 = &num1;
    cout << "The number is:" << num2 <<endl;
    cout << "The number is:" << *num2 <<endl;
    cout << "The number is:" << &num2 <<"\n\n";
    
    
    // cout << "I am here 3" << endl << endl;
    
    /*
    
    int* num3;

    num3 = &num1;
    
    cout << "The number is:" << num3 <<endl;
    cout << "The number is:" << *num3 <<endl;
    cout << "The number is:" << &num3 <<"\n\n";
    */
    
    return 0;
}
