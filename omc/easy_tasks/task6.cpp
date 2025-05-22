#include <iostream>
#include <iomanip>

int main()
{
	float p, r;
	int t;
	std::cout << "Enter your principal: ";
	std::cin >> p;
	std::cout << "Enter your term: ";
	std::cin >> t;
	std::cout << "Enter interest rate: ";
	std::cin >> r;
	double simple_interest = (p*t*r)/100;
	std::cout << std::fixed << "Your simple interest is " << std::setprecision(2) << simple_interest << "\n";
	return 0;
}
