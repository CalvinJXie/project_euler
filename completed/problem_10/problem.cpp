/*
Author: Calvin Xie
Date: 1/09/2024
Link: https://projecteuler.net/problem=10
g++ -Wextra -Wall -pedantic -pedantic-errors -o a problem.cpp
*/

#include <iostream>

// implement sieve of eratos instead for faster calculation but more memory usage
bool isPrime(int n)
{
    if(n%2 == 0)return false;
    if(n%3 == 0) return false;
    for(int i = 5;i<n/2;i+=2)
    {
        if(n%i == 0) return false;
    }
    return true;
}

long long solution(int max)
{
    long long total = 5;
    for(int i = 5;i<max;i+=2)
    {
        if(isPrime(i))
        {
            total += i;
            std::cout<<i<<std::endl;
        }
    }
    return total;
}

int main()
{
    std::cout<<solution(2000000)<<std::endl;
}