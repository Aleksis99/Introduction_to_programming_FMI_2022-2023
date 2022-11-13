#include <iostream>

using namespace std;

const int SIZE = 50000;

bool isValidTransition(int x1, int y1, int x2, int y2)
{
	return ((abs(x1 - x2) == 1 && abs(y1 - y2) == 2)
		|| abs(x1 - x2) == 2 && abs(y1 - y2) == 1);
}

bool validTransitions(int x[], int y[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (!isValidTransition(x[i], y[i], x[i + 1], y[i + 1]))
		{
			return false;
		}
	}

	return true;
}

bool validTransitionsWithSkipHelp(int x[], int y[], int n, int skip)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (i != skip && i + 1 != skip)
		{
			if (!isValidTransition(x[i], y[i], x[i + 1], y[i + 1]))
			{
				return false;
			}
		}
		else if (i + 1 == skip && i + 2 < n)
		{
			if (!isValidTransition(x[i], y[i], x[i + 2], y[i + 2]))
			{
				return false;
			}
		}
	}

	return true;
}

bool validTransitionsWithOneSkip(int x[], int y[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (validTransitionsWithSkipHelp(x, y, n, i))
		{
			cout<<x[i] << " " << y[i];
			return true;
		}
	}

	return false;
}

bool validTransitionsWithOneSkip2(int x[], int y[], int n)
{
	int firstInvalid, secondinvalid, countInvalid = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (!isValidTransition(x[i], y[i], x[i + 1], y[i + 1]))
		{
			countInvalid++;

			if (countInvalid == 1)
			{
				firstInvalid = i;
			}
			else if (countInvalid == 2)
			{
				secondinvalid = i;
			}
			else 
			{
				return false;
			}
		}
	}

	if (countInvalid == 2 && secondinvalid - firstInvalid == 1)
	{
		if (isValidTransition
		(x[firstInvalid], y[firstInvalid],
			x[firstInvalid + 2], y[firstInvalid+2]))
		{
			cout << x[secondinvalid] << " " << y[secondinvalid];
			return true;
		}
	}
	else if(countInvalid == 1)
	{
		if (firstInvalid == n - 2)
		{
			cout << x[firstInvalid + 1] << " " << y[firstInvalid + 1];
			return true;
		}
		else if (firstInvalid == 0)
		{
			cout << x[firstInvalid] << " " << y[firstInvalid];
			return true;
		}
		else if (isValidTransition
		(x[firstInvalid - 1], y[firstInvalid - 1],
			x[firstInvalid + 1], y[firstInvalid + 1]))
		{
			cout << x[firstInvalid] << " " << y[firstInvalid];
			return true;
		}
		else if (isValidTransition
		(x[firstInvalid], y[firstInvalid],
			x[firstInvalid + 2], y[firstInvalid + 2]))
		{
			cout << x[firstInvalid + 1] << " " << y[firstInvalid + 1];
			return true;
		}
	}

	return false;
}

int main()
{
	int x[SIZE], y[SIZE], n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		cin >> y[i];
	}

	if (validTransitions(x, y, n))
	{
		cout << "Yes";
	}
	else if(!validTransitionsWithOneSkip(x, y, n))
	{
		cout << "No";
	}


}

