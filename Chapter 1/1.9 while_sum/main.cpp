#include <iostream>

int main()
{
    int sum = 0, val = 50; // initialize sum and value variables

    while (val <= 100){ // initialize while loop with parameters to follow, in this case we tell the loop to run until the val variable is equal to 100
        sum += val; // adding the current loop value to the sum variable
        std::cout << sum << std::endl; // optional debug, printing current sum to console
        val++; // adding 1 to the val variable every loop
    }
    std::cout << "The sum of numbers between 50 and 100 is " << sum << std::endl; // output the sum of numbers between 50 and 100 to the console

    return 0;
}