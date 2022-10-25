#include <iostream>

using namespace std;

int main()
{
	int n, k, min;

	cin >> n >> k;

	if (n > k) 
	{
		min = k;
	}
	else 
	{
		min = n;
	}
	
	for (int i = min; i >= 1; i--)
	{
		if (n % i == 0 && k % i == 0) 
		{
			cout << i << " ";
		}
	}
}