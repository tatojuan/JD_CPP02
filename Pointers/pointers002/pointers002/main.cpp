//
//  main.cpp
//  pointers002
//
//  Created by Juan Davila on 8/10/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Pointers Example


#include <iostream>
#include <string>
using namespace std;


struct person
{
    person() : first("John"), last("Doe") , age(1000) {}
    string first ;
    string last;
    int age;
} ;

int main(int argc, const char * argv[]) {
    
    person someone;
    cout << "First line \n";
    cout << someone.first << " " << someone.last << " " << someone.age << endl;
    cout << "\nSecond line \n";
    person* someonePtr = &someone;
    cout << someonePtr->first << " " << someonePtr->last << " " << someonePtr->age << endl;
    cout << "\nThird line \n\n";
    person* someonePtr2 = &someone;
    cout << (*someonePtr2).first << " " << (*someonePtr2).last << " " << (*someonePtr2).age << endl;
    
    return 0;
}

