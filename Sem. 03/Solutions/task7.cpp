#include <iostream>

using namespace std;

int main()
{
	double x, y, radius;

	cin >> x >> y >> radius;

	if (x * x + y * y < radius * radius) 
	{
		cout << "In the circle";
	}
	else if(x * x + y * y == radius * radius)
	{
		cout << "On the circle";
	}
	else 
	{
		cout << "Out of the circle";
	}
}