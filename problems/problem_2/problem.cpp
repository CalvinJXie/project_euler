/*
Author: Calvin Xie
Date: 10/17/2023
Link: https://projecteuler.net/problem=2
*/

#include <iostream>
using namespace std;

int solution(int n, int max_fib)
{
  if(n <= 1)
  {
    return 0;
  }
  else if(n == 2)
  {
    return 2;
  }
  int fibVector[2] = {1, 2}; // Only needs to hold two values
  int res = 2; // holds sum of even values

  for(int i = 2; i < n; i++)
  {
    int new_val = fibVector[0] + fibVector[1];
    if(new_val > max_fib) // if we bypass the fib limit
    {

      return res;
    }
    if(new_val % 2 == 0)
    {
      res += new_val;
    }
    fibVector[0] = fibVector[1]; // move the current last value in front
    fibVector[1] = new_val;
  }

  return res;
}

int main()
{

  cout << solution(33, 4000000) << endl;
}
