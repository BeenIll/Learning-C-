/*

    BeenIll
    File.:    main.cpp
    Desc.:    The main C++ file for my calculator app

*/

#include <iostream>

int main() {
    double one, two;
    char operation;

    std::cout << "Welcome to my calculator app! \n";

    std::cout << "Please enter your 1st number: \n";

    std::cin >> one;

    std::cout << "Enter operation (+,-,*,/): \n";

    std::cin >> operation;

    std::cout << "Please enter your 2nd number: \n";

    std::cin >> two;

    switch (operation)
    {
        case '+': {
            std::cout << one + two;
            break;
        }

        case '-': {
            std::cout << one - two;
            break;
        }

        case '*': {
            std::cout << one * two;
            break;
        }

        case '/': {
            std::cout << "Your final number is: " << one / two;
            break;
        }
    default:
        break;
    }
}