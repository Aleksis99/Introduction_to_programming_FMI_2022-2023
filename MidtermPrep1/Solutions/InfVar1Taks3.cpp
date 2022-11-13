#include <iostream>

using namespace std;

int reverse(int n)
{
	int res = 0;

	while (n > 0)
	{
		res *= 10;
		res += n % 10;
		n /= 10;
	}

	return res;
}

bool isPalindrome(int n)
{
	return n == reverse(n);
}

int main()
{
	int n;
	cin >> n;

	int i = 10;

	while (true)
	{
		int currSufix = n % i;

		if (isPalindrome(currSufix))
		{
			cout << currSufix << " ";
		}

		if (currSufix == n)
		{
			break;
		}

		i *= 10;
	}
}

