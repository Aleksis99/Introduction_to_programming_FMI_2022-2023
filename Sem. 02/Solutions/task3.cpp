#include <iostream>

using namespace std;

int main()
{
	double speed;

	cin >> speed;
	if (speed < 0) {
		cout << "Not valid";
	}
	else if (speed <= 10) {
		cout << "Slow";
	}
	else if ( speed <= 50) {
		cout << "Average";
	}
	else if (speed <= 150) {
		cout << "Fast";
	}
	else if (speed <= 1000) {
		cout << "Ultra fast";
	}
	else {
		cout << "Extremely fast";
	}
}