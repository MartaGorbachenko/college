#include <iostream>

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int res[10];
    int pos = 0;

    for (int i = 100; i <= 999 && pos < 10; i++) {
        int sq = i * i;
        if (isPalindrome(sq)) {
            res[pos++] = i;
        }
    }

    std::cout << "3-digit numbers whose squares are palindromes:\n";
    for (int i = 0; i < pos; i++) {
        int sq = res[i] * res[i];
        std::cout << res[i] << "^2 = " << sq << "\n";
    }

    return 0;
}
