#include <iostream>

int main()
{
    int v1 = 0, v2 = 0; // initialize integers for user input
    std::cout << "Enter two integers to print the range between them:" << std::endl; // prompt user for integers
    std::cin >> v1 >> v2; // store user input into the v1 and v2 variables

    while (v1 <= v2){ // while conditional where the loop will run while v1 is less than v2
        std::cout << v1 << std::endl; // print out current loop iteration
        v1 ++; // add 1 to the first variable
    }
    return 0;
}