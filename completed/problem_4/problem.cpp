/*
Author: Calvin Xie
Date: 10/17/2023
Link: https://projecteuler.net/problem=4
*/

#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

bool isPalindrome(int n)
{
  int x = n, total = 0;
  while(n>0)
  {
    total = total*10 + n%10;
    n/=10;
  }
  return x==total;
}

// takes upper/lower bound range. 
int solution(int upper, int lower)
{
  int largest = 0;
  for(int i = upper;i>lower;--i)
  {
    for(int j = i-1;j>lower;--j)
    {
      int product = i*j;
      if(product<largest)
      {
        break;
      }
      if(isPalindrome(product)&&product>largest)// if product is a palindrome and is larger number
      {
        largest = product;
      }
    }
  }
  return largest;
}

int main()
{
  cout<<solution(999, 100)<<endl;
}
