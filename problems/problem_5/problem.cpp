/*
Author: Calvin Xie
Date: 11/3/2023
Link: https://projecteuler.net/problem=5
g++ -Wextra -Wall -pedantic -pedantic-errors -o a problem.cpp
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isDivisible(int n, int min_range, int max_range)
{
  for(int i = min_range; i <= max_range; ++i)
  {
    if(n % i != 0)
    {
      return false;
    }
  }
  return true;
}

int solution()
{
  int val = 2520;
  while(!isDivisible(val, 1, 20))
  {
    val += 2520;
  }
  return val;
}
int main()
{
  cout << solution() << endl;
}
