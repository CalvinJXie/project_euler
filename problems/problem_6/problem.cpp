/*
Author: Calvin Xie
Date: 11/5/2023
Link: https://projecteuler.net/problem=6
g++ -Wextra -Wall -pedantic -pedantic-errors -o a problem.cpp
*/

#include <iostream>
#include <cmath>
using namespace std;

int sq_sum(int n)
{
  int ret = 0;
  for(int i = 1; i <= n; ++i)
  {
    ret += i * i;
  }
  return ret;
}
int sum_sq(int n)
{
  int ret = 0;
  for(int i = 1; i <= n; ++i)
  {
    ret += i;
  }
  return ret * ret;
}

int solution()
{
  return sum_sq(100) - sq_sum(100);
}
int main()
{
  cout << solution() << endl;
}
