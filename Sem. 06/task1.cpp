#include <iostream>

using namespace std;

const int DIGITS = 4;

int length(int n)
{
	int len = 0;

	if (n == 0)
	{
		return 1;
	}

	while (n > 0)
	{
		len++;

		n /= 10;
	}

	return len;
}

bool allDigitsAreDiferent(int n, bool found[])
{
	while (n > 0)
	{
		int digit = n % 10;

		if (!found[digit]) 
		{
			found[digit] = true;
		}
		else
		{
			return false;
		}

		n /= 10;
	}

	return true;
}

bool isNumValid(int n) 
{
	if (length(n) != DIGITS)
	{
		return false;
	}

	bool found[10]{false};

	if (!allDigitsAreDiferent(n, found))
	{
		return false;
	}

	return !found[0];
}

int getInput()
{
	int n;
	cin >> n;

	while (!isNumValid(n))
	{
		cout << "Please enter a valid number";
		cin >> n;
	}

	return n;
}

int getBulls(int guess, int num)
{
	int bulls = 0;

	while (guess > 0)
	{
		if (guess % 10 == num % 10) 
		{
			bulls++;
		}

		guess /= 10;
		num /= 10;
	}

	return bulls;
}

bool containsDigit(int num, int digit)
{
	while (num > 0)
	{
		if (num % 10 == digit)
			return true;

		num /= 10;
	}

	return false;
}

int getSumOfBullsAndCows(int guess, int num)
{
	int res = 0;

	while (guess > 0)
	{
		int lastDigit = guess % 10;

		res += (int)containsDigit(num, lastDigit);

		guess /= 10;
	}

	return res;
}

void getBullsAndCows(int guess, int num, int& cows, int& bulls)
{
	bulls = getBulls(guess, num);
	cows = getSumOfBullsAndCows(guess, num) - bulls;
}

int main()
{
	int num;

	num = getInput();

	int cows, bulls = 0;

	while (bulls != DIGITS)
	{
		int guess = getInput();

		getBullsAndCows(guess, num, cows, bulls);

		cout << "Bulls :" << bulls << endl;
		cout << "Cows :" << cows << endl;
	}
}
