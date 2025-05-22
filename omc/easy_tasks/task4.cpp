#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int square, volume;
	cout << "Enter length: ";
	cin >> a;
	cout << "Enter width: ";
 	cin >> b;
	cout << "Enter height: ";
	cin >> c;
	square = 2*(a*b+b*c+a*c);
	volume = a*b*c;
	cout << "Square is " << square << " and volume is " << volume << endl;
	return 0;
}