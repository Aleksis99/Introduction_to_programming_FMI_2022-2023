#include <iostream>

using namespace std;

//Задача: Въвежда се цяло число - оценка от училище. Отпечатайте я с дума.

int main()
{
    int grade;

    cin >> grade;

	switch (grade)
	{
	case 6:
		cout << "Exelent";
		break;
	case 5:
		cout << "Very good";
		break;
	case 4:
		cout << "Good";
		break;
	case 3:
		cout << "Poor";
		break;
	case 2:
		cout << "Fail";
		break;
	default:
		cout << "Not a valid grade";
	}
}
