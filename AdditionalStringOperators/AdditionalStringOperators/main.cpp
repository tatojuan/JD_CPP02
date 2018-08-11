//
//  main.cpp
//  AdditionalStringOperators
//
//  Created by Juan Davila on 8/9/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Examples of additional string operators
//
/*
    s.length()
    s.size()
    s.fing(arg)  arg= string literal or char
    s.substr(pos, len)
    s.at(pos)
    s.tupper(ch)
    s.tolower(ch)
 */

#include <iostream>
#include <string>
#include <cctype> //toupper(ch), tolower(ch)
using namespace std;

int main(int argc, const char * argv[]) {
    
    string fullName = "Juan Davila";
    string str2 = "n D";
    cout << fullName.length() << endl;
    cout << fullName.size() << endl;
    cout << fullName.find("J") << endl;
    cout << fullName.find("u") << endl;
    cout << fullName.find("a") << endl;
    cout << fullName.find("avi") << endl;
    cout << fullName.find(str2) << endl;
    cout << fullName.find(str2 + "a") << endl;
    cout << fullName.find("h") << endl; // not in string
    
    
    string longString = "This is a long string to see how it behaves";
    
    for(int i = 0; i < longString.length(); i++)
    {
        cout << longString.at(i);
    }
    cout << "\n\n";
    for(int i =  longString.length()-1; i >= 0;  i--)
    {
        cout << longString.at(i);
    }
    
       cout << "\n\n";
    for(int i = 0; i < longString.length(); i++)
    {
        cout << longString.substr( i, longString.length()-1) << endl;
    }
    
    cout << "\n\n";
    
    for(int i = 0; i <longString.length(); i++)
    {
        cout << longString[i] ;
    }
       cout << "\n\n";
    
    cout << "\n\n";
    
    for(int i = 0; i <longString.length(); i++)
    {
        cout << toupper(longString[i]) ;
    }
    cout << "\n\n";
    for(int i = 0; i < longString.length(); i++)
    {
        cout << toupper( longString.at(i));
    }
    
    
    
     cout << "\n\n";
    for(int i = 0; i <longString.length(); i++)
    {
        char temp = toupper(longString[i]) ;
        cout << temp;
    }
    cout << "\n\n";
    for(int i = 0; i < longString.length(); i++)
    {
        char temp = toupper( longString.at(i));
        cout << temp;
    }
    cout << "\n\n";
    
    
    return 0;
}





















