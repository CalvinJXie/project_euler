/*
Author: Calvin Xie
Date: 12/24/2023
Link: https://projecteuler.net/problem=7
g++ -Wextra -Wall -pedantic -pedantic-errors -o a problem.cpp
*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n%2==0) return false;
    if(n%3==0) return false;
    for(int i = 5;i<n/2;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int count = 6, i = 15;// count = total primes seen. i = number to check if prime
    while(count != 10001)
    {
        if(isPrime(i)) 
        {
            count++;
        }
        i+=2;
    }
    cout<<i-2<<endl;
}