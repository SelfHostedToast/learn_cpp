#include <iostream>

int main()
{
    int v1 = 5, v2 = 5; // Define v1 & v2, previously undefined
    std::cout << "The sum of " << v1/*;*/ << " and " << v2/*;*/ << " is " << v1 + v2 << std::endl;
    // Lastly, to make the program functional, we need to remove the semi-colons between expressions
    // Testing legalities of comments / nested comments

    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/" */; not legal
    std::cout << /* "*/" /* "/*" */; // somehow works? I assume its because technically the comment isn't closed until the end of the statement.
    return 0;
}