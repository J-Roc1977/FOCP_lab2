#include <iostream>

int main()
{
    std::cout << "Please introduce a number: " << std::endl;

    int number;
    std::cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            std::cout << "Your number is not prime" << std::endl;
            return 0;
        }
    }

    std::cout << "Your number is prime" << std::endl;

    return 0;
}