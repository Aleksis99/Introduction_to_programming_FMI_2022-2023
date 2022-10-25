#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}

		for (int j = 1; j <= (n - i) * 4; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= n + 1; j++)
		{
			cout << " ";
		}

		for (int j = i; j >= 1; j--)
		{
			cout << j << " ";
		}

		cout << endl;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
	}

	for (int i = 1; i <= n; i++)
	{
		cout << "-";
	}

	cout  << " ";

	for (int i = n; i >= 1; i--)
	{
		cout << i << " ";
	}

	cout << endl;

	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}

		for (int j = 1; j <= (n - i) * 4; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= n + 1; j++)
		{
			cout << " ";
		}

		for (int j = i; j >= 1; j--)
		{
			cout << j << " ";
		}

		cout << endl;
	}
}
