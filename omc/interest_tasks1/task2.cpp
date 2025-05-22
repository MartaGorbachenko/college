#include <iostream>

long double fact(int n)
{
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int n;
    std::cout << "Enter the number of the row (n): ";
    std::cin >> n;

    if (n < 0) {
        std::cerr << "Error: number of rows must be non-negative!\n";
        return 1;
    }

    int* row = new int[n + 1];

    for (int i = 0; i <= n; i++) {
        row[i] = static_cast<int>(fact(n) / (fact(i) * fact(n - i)));
    }

    std::cout << "Row " << n << " of Pascal's Triangle:\n";
    for (int i = 0; i <= n; i++) {
        std::cout << row[i] << " ";
    }
    std::cout << "\n";

    delete[] row;
    return 0;
}
