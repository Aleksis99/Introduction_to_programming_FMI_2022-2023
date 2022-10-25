#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	int gcd = 1, min;

	if (a < b) 
	{
		min = a;
	}
	else 
	{
		min = b;
	}

	for (int i = 1; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0) 
		{
			gcd = i;
		}
	}

	cout << gcd;
}
