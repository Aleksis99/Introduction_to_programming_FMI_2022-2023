#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	
	for (int i = 2; i <= n; i++)
	{
		bool isPrime = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			int count = 0;

			while (n % i == 0) {
				count++;
				n /= i;
			}

			if (count != 0)
			{
				cout << i << "^" << count << " ";
			}
		}
	}
}
