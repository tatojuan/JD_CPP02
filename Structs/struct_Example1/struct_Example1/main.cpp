//
//  main.cpp
//  struct_Example1
//
//  Created by Juan Davila on 8/10/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Struct Example

#include <iostream>
#include <string>
using namespace std;

struct student
{
    student()
    {
        first = "noFist";
        last = "nolast";
        age = 1000;
    }
    string first;
    string last;
    int age;
    
}stud1, stud2;

int main(int argc, const char * argv[]) {
    
     cout << stud1.first << " " << stud1.last << " age: " << stud1.age << "\n\n";
     cout << stud2.first << " " << stud2.last << " age: " << stud2.age << "\n\n";
  
    stud1.first = "Juan";
    stud1.last = "Davila";
    stud1.age=0;
    stud2.first = "Joe";
    stud2.last="Doe";
    stud2.age=100;
    
    cout << stud1.first << " " << stud1.last << " age: " << stud1.age << "\n\n";
    cout << stud2.first << " " << stud2.last << " age: " << stud2.age << "\n\n";
    
    student stud3;
    cout << stud3.first << " " << stud3.last << " age: " << stud3.age << "\n\n";
    
    return 0;
}
