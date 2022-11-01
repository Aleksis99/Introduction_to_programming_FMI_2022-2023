#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int n;
	cin >> n;

	for (int i = 6; i < n; i += 6)
	{
		int less = i - 1;
		int greather = i + 1;
		bool isLessPrime = true;
		bool isGreatherPrime = true;

		for (int j = 2; j <= sqrt(greather); j++)
		{
			if (less % j == 0) {
				isLessPrime = false;
				break;
			}


			if (greather % j == 0) {
				isGreatherPrime = false;
				break;
			}
		}

		if (isLessPrime && isGreatherPrime) {
			cout << less << " " << greather << endl;
		}
	}
}
