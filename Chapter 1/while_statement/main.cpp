#include <iostream>

int main()
{
    int sum = 0, val = 1;

    while (val <= 10){
        sum += val; // assigns sum + val to sum
        std::cout << sum << std::endl; // prints value of sum to the console.
        val ++; // adds 1 to val every loop
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}