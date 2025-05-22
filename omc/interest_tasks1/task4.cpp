#include <iostream>

int main() {
    std::cout << "Enter number: ";
    int number;
    std::cin >> number;

    if (number <= 1) {
        std::cerr << "Error: number must be greater than 1.\n";
        return 1;
    }

    int temp = number;
    int factors[100];
    int count = 0;

    for (int i = 2; i <= temp; ++i) {
        while (number % i == 0) {
            factors[count++] = i;
            number /= i;
        }
    }

    std::cout << temp << " = ";
    for (int i = 0; i < count; ++i) {
        std::cout << factors[i];
        if (i < count - 1)
            std::cout << " * ";
    }
    std::cout << "\n";

    return 0;
}
