#include <iostream>
using namespace std;

int main()
{
	int quarter_amt, dime_amt, nickel_amt;
	int quarters, dimes, nickels;
	int total;

	cout << "Enter the number of quarters: ";
	cin >> quarter_amt;
	cout << "Enter the number of dimes: ";
	cin >> dime_amt;
	cout << "Enter the number of nickels: ";
	cin >> nickel_amt;

	quarters = quarter_amt * 25;
	dimes = dime_amt * 10;
	nickels = nickel_amt * 5;

	total = quarters + dimes + nickels;

	cout << "The coins are worth " << total << " cents." << endl;
	
	return 0;
}
