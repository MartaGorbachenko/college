// Практична 06 ІПЗ-21 Горбаченко Марта
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int a = 3;

int main() {
    int x; 
    double z = 0.0;
    std::cout << "Enter x: ";
    std::cin >> x;
    if ((a - x) > 0){
        z += sqrt(a - x);
    }
    else {
        z += pow((x + 2.0), 2) * pow((x-1.0), 3) + sin(a * M_PI);
    }
    std::cout << "x=" << x << ", a=" << a << ", result=" << z << std::endl;;

    int a;
    int b;
    int c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    double z1, z2, z3;

    if (x < 0){
        z2 = -777;
        std::cout << z2;
    }
    else if (c * x + a == 0){
        z2 = -555;
    }
    else {
        z2 = sqrt(pow(x, 3)) + (2.0 * pow(x, 2)) / (c * x + a);
    }
    
    z1 = (2.0 * c * x) + (b * pow(x, 3));
    z3 = a * pow(x, 2) * (x + c) + pow((x - a * b), 2);
    
    std::cout << "Result\n";
    std::cout << "1\t2\t3\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setw(7) << z1 << "\t" << std::setw(7) << z2 << "\t" << std::setw(7) << z3 << "\t\n";;
    return 0;
}