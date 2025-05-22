#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    int length;
    srand(static_cast<unsigned>(time(nullptr)));

    std::cout << "Enter the length of the array: ";
    std::cin >> length;

    if (length <= 0) {
        std::cerr << "Error: length must be positive!\n";
        return 1;
    }

    int* numbers = new int[length];
    for (int i = 0; i < length; i++) {
        numbers[i] = rand();
    }

    std::cout << "Array before sorting:\n";
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < length - 1; i++) {
        for (int j = length - 1; j > i; j--) {
            if (numbers[j] < numbers[j - 1]) {
                std::swap(numbers[j], numbers[j - 1]);
            }
        }
    }

    std::cout << "Array after sorting:\n";
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
