#include <iostream>

using namespace std;

int main()
{
	char figure;

	cin >> figure;

	if (figure == 's') 
	{
		double side;
		cin >> side;

		cout << side * side << endl;
	}
	else if (figure == 'r') 
	{
		double width, height;

		cin >> width >> height;

		cout << width * height << endl;
	}
	else if (figure == 'c') {
		double radius;

		cin >> radius;

		cout << radius * radius * 3.14;
	}
	else {
		cout << "Not a valid figure";
	}
}