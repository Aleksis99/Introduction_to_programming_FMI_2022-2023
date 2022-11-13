#include <iostream>

using namespace std;

void printMaxSequence(int n)
{
	int lastDigit = n % 10;
	int maxSeq = 1, maxNum = lastDigit;
	int currSeq = 1, currNum = lastDigit;

	n /= 10;

	while (n > 0)
	{
		int currDigit = n % 10;

		if (lastDigit == currDigit)
		{
			currSeq++;

			if (currSeq > maxSeq)
			{
				maxSeq = currSeq;
				maxNum = currNum;
			}
		}
		else
		{
			currSeq = 1;
			currNum = currDigit;
		}

		n /= 10;
	}

	cout << maxSeq << "(" << maxNum << ")";
}

int main()
{

}

