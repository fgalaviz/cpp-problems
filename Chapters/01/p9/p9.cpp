#include <iostream>
using namespace std;

int main()
{
	int time, acceleration = 32, distance;
	int top;

	cout << "Enter time (in seconds): ";
	cin >> time;

	top = acceleration * time * time;
	distance = top / 2;

	cout << "An object in freefall would drop " << distance << "m in " << time << "s" << endl; 

	return 0;
}
