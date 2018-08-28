//
//  main.cpp
//  2D_Array
//
//  Created by Juan Davila on 8/27/18.
//  Copyright © 2018 Davila. All rights reserved.
//  Example of 2D array

#include <iostream>
#include <string>
using namespace std;

const int NUM_ROOWS = 3;
const int NUM_COLS = 5;


void initialized(int my2DArray[][NUM_COLS])
{
  int counter = 0;
  for(int i = 0; i<3 ; i++)
  {
    for(int x = 0; x<5 ; x++)
    {
      my2DArray[i][x] = counter++;
    }
  }
}


int main(int argc, const char * argv[]) {
  
  int my2DArray[NUM_ROOWS][NUM_COLS];
  initialized(my2DArray);
  
  for(int i = 0; i<3 ; i++)
  {
    for(int x = 0; x<5 ; x++)
    {
      cout << my2DArray[i][x] << " ";
    }
  }
  
  cout << "\n\n";
  
  
  return 0;
}
