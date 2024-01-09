/*
Author: Calvin Xie
Date: 10/17/2023
Link: https://projecteuler.net/problem=3
g++ -Wextra -Wall -pedantic -pedantic-errors -o a problem.cpp
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int solution(long long n)
{
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

int solution2(long long n)
{
  if(n%2 == 0)
  {
    n /= 2;
  }
  if(n%3 == 0)
  {
    n /= 3;
  }
  int p = 5;
  vector<int> primes;
  while(n>1)
  {
    if(n%p == 0)
    {
      primes.push_back(p);
      n/=p;
    }
    else
    {
      p+=2;
    }
  }
  return primes[primes.size()-1];
}

int main()
{
  long long x = 600851475143;
  cout<<solution2(x)<<endl;
  //cout<<solution(13195)<<endl;
}
