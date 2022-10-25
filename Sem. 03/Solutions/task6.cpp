#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	for (int x = -100; x <= 100; x++)
	{
		if (a * x * x * x * x
			+ b * x * x * x
			+ c * x * x
			+ d * x
			+ e
								>= 0) 
		{
			cout << x << " ";
		}

	}
}