#include <iostream>
#include <ctime>
#include <cstdlib>

int getRandomInRange(int minValue, int maxValue) {
    return std::rand() % ((maxValue + 1) - minValue) + minValue;
}

int main() {
    int minValue, maxValue;
    const int arraySize = 10;
    int randomNumbers[arraySize];

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    std::cout << "Enter minimum value: ";
    std::cin >> minValue;

    std::cout << "Enter maximum value: ";
    std::cin >> maxValue;

    if (minValue > maxValue) {
        std::cerr << "Error: minimum value is greater than maximum value!\n";
        return 1;
    }

    for (int i = 0; i < arraySize; ++i) {
        randomNumbers[i] = getRandomInRange(minValue, maxValue);
    }

    std::cout << "Generated random numbers:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << randomNumbers[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
