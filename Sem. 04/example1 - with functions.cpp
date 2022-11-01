#include <iostream>

using namespace std;

bool isPrime(unsigned int n) {

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main()
{
	unsigned int n;
	cin >> n;

	for (int i = 6; i < n; i+= 6)
	{
		if (isPrime(i - 1) && isPrime(i + 1)) {
			cout << i - 1 << " " << i + 1 << endl;
		}

	}
}
