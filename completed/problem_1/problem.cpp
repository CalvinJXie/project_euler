/*
Author: Calvin Xie
Date: 10/17/2023
Link: https://projecteuler.net/problem=1
g++ -Wextra -Wall -pedantic -pedantic-errors -o a problem.cpp
*/

#include <iostream>
using namespace std;

int main()
{
  int n = 1000;
  int sum = 0;
  for(int i = 0; i < n; i++)
  {

      if(i%3 == 0 || i%5 == 0) // if multiple of 3 or 5
      {
        sum += i;
      }

  }
  cout << sum << endl;
}
