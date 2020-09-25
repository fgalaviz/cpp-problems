#include <iostream>
using namespace std;

int main()
{
	int first, second, sum, product;

	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter second number: ";
	cin >> second;
	cout << "========================" << endl;
	
	sum = first + second;
	product = first * second;

	cout << "The sum of " << first << " and " << second << " is " << sum << endl;
	cout << "The product of " << first << " and " << second << " is " << product << endl;

	return 0;
}
