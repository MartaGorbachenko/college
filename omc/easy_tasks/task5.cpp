#include <iostream>
#include <iomanip>

int main()
{
	double radius;
	double pi = 3.14;
	std::cout << "Enter radius: ";
	std::cin >> radius;
	std::cout << std::fixed;
	std::cout << "Circle length is " << std::setprecision(2) << 2*pi*radius << std::endl;
	std::cout << "Circle square is " << std::setprecision(2) << pi*(radius*radius) << std::endl;
	return 0;
}
