//
//  main.cpp
//  string002
//
//  Created by Juan Davila on 8/26/18.
//  Copyright © 2018 Davila. All rights reserved.
//

#include <iostream>
#include <string>



using namespace std;

int lenlen(char* str)
{
  int len = 0;
  char* ch = str;
  while(*ch != '\0')
  {
    len++;
  }
  cout << "This is the length:" << len << " \n\n";
  return len;
}


int main(int argc, const char * argv[]) {
  cout << "Test test \n\n";
  
  char s[] = "Hello, World!1";
  cout << lenlen(s) << endl;
  
  
  char s2[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '2'};
  string t2(s2);
   cout << lenlen(s2) << endl;
  
  
  /*string temp = "Hello, World!3";
  char  *s3 = temp.c_str();
  string t3(s3);
   cout << lenlen(s3) << endl;*/
  
  
  
  return 0;
}

























