/*
Author: Calvin Xie
Date: 1/9/2024
Link: https://projecteuler.net/problem=9
g++ -Wextra -Wall -pedantic -pedantic-errors -o a problem.cpp
*/

#include <iostream>

int solution(int target)
{
    int c = 5;
    while(true)
    {
        for(int b = c-1;b>1;--b)
        {
            for(int a = b-1;a>0;--a)
            {
                if((a*a+b*b) == (c*c) && a+b+c == target)
                {
                    return a*b*c;
                }
            }
        }
        ++c;
        if(c+3 > target)
        {
            break;
        }
    }
    return -1;
}

int main()
{
    std::cout<<solution(1000)<<std::endl;
}