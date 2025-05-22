#include <iostream>
using namespace std;

int main()
{
	int x, y;
	int sum, diff, prod;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	sum = x+y;
	diff = x-y;
	prod = x*y;
	cout << "Sum is " << sum << endl;
	cout <<"Difference is " << diff << endl;
	cout <<"Product is " << prod << endl;
}