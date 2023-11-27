/*
Author: Calvin Xie
Date: 10/17/2023
Link: https://projecteuler.net/problem=3
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int solution(long n)
{
  int res;
  int p = 2;
  vector<int> primes;
  while(n > 1)
  {
    if(n % p == 0) // If divisible by prime
    {
      //cout << p << endl;
      primes.push_back(p);
      n /= p;
    }
    else{
      ++p;
    }
  }
  return primes[primes.size()-1];
}
int main()
{
  cout << solution(600851475143) << endl;
}
