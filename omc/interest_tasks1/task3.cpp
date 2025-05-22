#include <iostream>

int main() {
    const int MAX_SIZE = 1000;
    int limit;

    std::cout << "Enter the last number (max = 1000): ";
    std::cin >> limit;

    if (limit <= 1 || limit > MAX_SIZE) {
        std::cerr << "Error: number must be between 2 and 1000.\n";
        return 1;
    }

    bool isPrime[MAX_SIZE] = {false};

    for (int i = 2; i < limit; ++i) {
        isPrime[i] = true;
    }

    for (int i = 2; i * i < limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    std::cout << "Prime numbers less than " << limit << ":\n";
    int count = 0;
    for (int i = 2; i < limit; ++i) {
        if (isPrime[i]) {
            std::cout << i << " ";
            ++count;
        }
    }
    std::cout << "\nTotal primes found: " << count << std::endl;

    return 0;
}
