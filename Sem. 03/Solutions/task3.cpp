#include <iostream>

using namespace std;

int main()
{
	int n, length = 0;

	cin >> n;

	int copy = n;

	while (copy > 0)
	{
		copy /= 10;
		length++;
	}

	if (length <= 2) {
		cout << 0 << ", " << 1;
	}
	else 
	{
		int newNumber = 0;
		for (int i = 1; i < length / 2; i++)
		{
			int lastDigit = n % 10;
			for (int j = 1; j < i; j++)
			{
				lastDigit *= 10;
			}

			newNumber += lastDigit;

			n /= 10;
		}

		if(length % 2 == 1)
		{
			int lastDigit = n % 10;
			for (int j = 1; j < length / 2; j++)
			{
				lastDigit *= 10;
			}

			newNumber += lastDigit;

			length++;
		}
		n /= 100;

		int digitPos = length / 2;

		while (n > 0) 
		{
			int lastDigit = n % 10;
			for (int j = 1; j < digitPos; j++)
			{
				lastDigit *= 10;
			}

			newNumber += lastDigit;

			n /= 10;
			digitPos++;
		}

		cout << newNumber << ", " << (newNumber + 1);

	}
}