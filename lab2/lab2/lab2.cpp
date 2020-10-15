#include <iostream>

int pow(int base, int power) {
    int result = 1;

    for (int i = 0; i < power; i++) {
        result *= base;
    }

    return result;
}

int read_int() {
    std::cout << "Please introduce a number:" << std::endl;

    int n;
    std::cin >> n;

    return n;
}

int main() {
    int base = read_int();
    int power = read_int();

    int result = pow(base, power);

    std::cout << "The result is: " << result << std::endl;

    return 0;
}