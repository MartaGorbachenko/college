#include <iostream>

int main() {
    const char* ones[] = {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    const char* tens[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    const char* hundreds[] = {
        "", "one hundred", "two hundred", "three hundred", "four hundred",
        "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"
    };

    int n;
    std::cout << "Enter a number from 1 to 1000: ";
    std::cin >> n;

    if (n < 0 || n > 1000) {
        std::cerr << "Number is out of range" << std::endl;
        return 1;
    }

    if (n == 0) {
        std::cout << "zero\n";
        return 0;
    }

    if (n == 1000) {
        std::cout << "one thousand\n";
        return 0;
    }



    if (n >= 100) {
        std::cout << hundreds[n / 100];
        n %= 100;
        if (n > 0) {
            std::cout << " and ";
        } else {
            std::cout << "\n";
            return 0;
        }
    }

    if (n >= 20) {
        std::cout << tens[n / 10];
        n %= 10;
        if (n > 0) {
            std::cout << " ";
        } else {
            std::cout << "\n";
            return 0;
        }
    }

    if (n > 0) {
        std::cout << ones[n] << "\n";
    }

    return 0;
}
