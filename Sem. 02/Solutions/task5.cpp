#include <iostream>

using namespace std;

int main()
{
	int hours, minutes;

	cin >> hours >> minutes;

	if (!(hours >= 0 && hours < 24 && minutes >= 0 && minutes <= 59))
	{
		cout << "Input isn't valid";
	}
	else 
	{
		(minutes += 15) %= 60;

		if (minutes < 15) 
		{
			hours++;
		}

		hours %= 24;

		if (hours < 10) {
			cout << 0;
		}

		cout << hours<<":";

		if (minutes < 10) {
			cout << 0;
		}

		cout << minutes << endl;
	}
}