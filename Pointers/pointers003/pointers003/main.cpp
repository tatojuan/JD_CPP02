//
//  main.cpp
//  pointers003
//
//  Created by Juan Davila on 8/10/18.
//  Copyright © 2018 Davila. All rights reserved.
//

#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, const char * argv[]) {
    int num = 100;
    int num2 = 200;
    int *number = &num;
    cout << *number << endl;
    
    *number = num2;
    cout << *number << endl;
    
    *number = num2 + 200;
    cout << *number << endl;
    
    number = nullptr;
    cout <<"What am I: "<< number << "  nullptr \n";
    cout <<"What am I: "<< &number << "\n\n\n";
    //cout <<"What am I: " << typeof(num) << "\n\n\n";
    
    return 0;
}
