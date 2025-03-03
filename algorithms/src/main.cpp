#include <iostream>

#include "../include/algo.hpp"
int main() {
    std::cout << "Fibonacci of 5 is: " << fibonacci(5) << std::endl;
    int input[5] = {1, 3, 5, 6, 5};
    Array* array = init(5, input);
    const int idx_result = linear_search(array, 3);
    std::cout << "Index of 3 in array is: " << idx_result << std::endl;
    return 0;
}
