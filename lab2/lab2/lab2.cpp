#include <iostream>

bool is_prime(int number) 
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            std::cout << "Your number is not prime" << std::endl;
            return false;
        }
        
    }

    return true;
}

int main()
{
    std::cout << "Please introduce a number: " << std::endl;

    int number;
    std::cin >> number;

    if (is_prime(number))
    {
        std::cout << "Your number is prime" << std::endl;
    } else {
        std::cout << "Your number is not prime" << std::endl;
    }

    std::cout << "Your number is prime" << std::endl;

    return 0;
}