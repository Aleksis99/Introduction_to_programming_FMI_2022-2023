#include <iostream>

using namespace std;

int countDenom(int n)
{
	n = abs(n);

    int count = 0;

	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			count += 2;
		}

		if (i * i == n)
		{
			count--;
		}
	}

	return count;
}

bool isPrime(int n)
{
	n = abs(n);

	if (n < 2)
	{
		return false;
	}

	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int a, b;

	cin >> a >> b;

	int count = 0;

	for (int i = a; i <= b; i++)
	{
		if (isPrime(countDenom(i)))
		{
			count++;
		}
	}

	cout << count;
}
