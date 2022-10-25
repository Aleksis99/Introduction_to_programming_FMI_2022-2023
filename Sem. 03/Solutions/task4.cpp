#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		if (i > 1)
		{

			bool isPrime = true;

			for (int j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					isPrime = false;
					break;
				}
			}

			if (isPrime)
			{
				cout << i << endl;
			}
		}
	}
}