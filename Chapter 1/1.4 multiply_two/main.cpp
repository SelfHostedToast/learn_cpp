#include <iostream>

int main()
{
    std::cout << "Enter two numbers to multiply together:" << std::endl; // Print the prompt to the console
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    //std::cout << "The product of " << v1 << " and " << v2 << " equals " << v1 * v2 << std::endl; rewrite for exercisce 1.5
    std::cout << "Now calculating the product\n";
    std::cout << v1 << "*" << v2 << "..." << std::endl;
    std::cout << "Product: ";
    std::cout << v1 * v2;

    return 0;
}