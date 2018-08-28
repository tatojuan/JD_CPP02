//
//  main.cpp
//  2D_Array002
//
//  Created by Juan Davila on 8/27/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Example of 2D array



#include <iostream>
#include <string>
using namespace std;

const int NUM_ROOWS = 2;
const int NUM_COLS = 3;




int main(int argc, const char * argv[]) {
  
  int my2DArray[NUM_ROOWS][NUM_COLS]
  {
    {-5, 9, 3},
    {2, 4, 8}
  };

  for(int i = 0; i < 2 ; i++)
  {
    for(int x = 0; x < 3; x++)
    {
      cout << my2DArray[i][x] << " ";
    }
    cout << endl;
  }

  
  
  
  
  
  cout << "\n\n";
  
  
  return 0;
}

