//
//  main.cpp
//  struct_Example2
//
//  Created by Juan Davila on 8/10/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Struct Example

#include <iostream>
#include <string>
using namespace std;


struct  car
{
   car()  : make("No Make"), model("No Model") {}
    string make;
    string model;
} ;

struct student
{
    
    string first;
    string last;
    int age;
    car firstCar;
    
}stud1, stud2;

int main(int argc, const char * argv[]) {
    
    cout << stud1.first << " " << stud1.last << " age: " << stud1.age << " " << stud1.firstCar.make << " " << stud1.firstCar.model << "\n\n";
    cout << stud2.first << " " << stud2.last << " age: " << stud2.age << " " << stud2.firstCar.make << " " << stud2.firstCar.model <<  "\n\n";
    
    stud1.first = "Juan";
    stud1.last = "Davila";
    stud1.age=0;
    stud2.first = "Joe";
    stud2.last="Doe";
    stud2.age=100;
    
    cout << stud1.first << " " << stud1.last << " age: " << stud1.age << "\n\n";
    cout << stud2.first << " " << stud2.last << " age: " << stud2.age << "\n\n";
    
    student stud3;
    stud3.firstCar.make="Chevy";
    stud3.firstCar.model="Taho";
    cout << "STUD#: "<< stud3.first << " " << stud3.last << " age: " << stud3.age << " " << stud3.firstCar.make << " " << stud3.firstCar.model << "\n\n";
    
    
    
    return 0;
}

