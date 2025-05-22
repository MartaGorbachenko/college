#include <iostream>
#include <iomanip>

int main() {
    int limit;
    std::cout << "Enter a positive number (limit): ";
    std::cin >> limit;

    if (limit <= 0) {
        std::cerr << "Error: limit must be a positive number.\n";
        return 1;
    }

    std::cout << "Pythagorean triples (a, b, c) where a^2 + b^2 = c^2 and values =< " << limit << ":\n";

    int tripleCount = 0;
    for (int a = 1; a <= limit; ++a) {
        for (int b = a; b <= limit; ++b) {
            int cSquared = a * a + b * b;
            int c = static_cast<int>(std::sqrt(cSquared));

            if (c * c == cSquared && c <= limit) {
                std::cout << std::setw(2) << ++tripleCount << ") (a: " << a
                          << ", b: " << b << ", c: " << c << ")\n";
            }
        }
    }

    if (tripleCount == 0) {
        std::cout << "No Pythagorean triples found.\n";
    } else {
        std::cout << "Total triples found: " << tripleCount << std::endl;
    }

    return 0;
}
