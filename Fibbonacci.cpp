#include <iostream>

#include "algorithms/include/algo.hpp"

int fib_iterative(const int n) 
{
    int prev = 1;
    int prev_prev = 0;
    int sum = 0;
    for (int i = 0; i <= n; i++) 
    {
        sum = prev + prev_prev;
        prev_prev = prev;
        prev = sum;
    }
    return sum;
}

int main() 
{ 
    int y = fib_iterative(10);
    std::cout << y << std::endl;
    return 0;
}