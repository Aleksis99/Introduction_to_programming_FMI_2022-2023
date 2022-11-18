#include <iostream>

using namespace std;


void findMinAndMax(int n, int& min, int& max)
{
	n = abs(n);

	min = 9;
	max = 0;

	while (n > 0)
	{
		int lastDigit = n % 10;

		if (lastDigit < min)
		{
			min = lastDigit;
		}

		if (lastDigit > max)
		{
			max = lastDigit;
		}

		n /= 10;
	}
}

int main()
{
	int n;
	cin >> n;

	int min, max;

	findMinAndMax(n, min, max);

	cout << min << " " << max;

}
