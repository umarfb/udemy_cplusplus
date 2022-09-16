#include <iostream>

int main()
{
    int favourite_number;

    std::cout << "Type in a favourite number between 1 and 100: " << std::endl;
    std::cin >> favourite_number;
    std::cout << "Amazing! That's my favourite number too!" << std::endl;
    std::cout << "No really, " << favourite_number << " is my favourite number!";
    return 0;
}