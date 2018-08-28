//
//  main.cpp
//  String001
//
//  Created by Juan Davila on 8/26/18.
//  Copyright © 2018 Davila. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



int main(int argc, const char * argv[]) {
    string h = "Hello World!";
    
    for(int i = 0 ; i < h.length() ; i++)
    {
     cout << h.at(i);
    }
     
    cout << "\n\n";
    
    for(int i = 0 ; i < h.length() ; i++)
    {
        cout << h[i];
    }
     cout << "\n\n";
    
    
    
    
    return 0;
}
