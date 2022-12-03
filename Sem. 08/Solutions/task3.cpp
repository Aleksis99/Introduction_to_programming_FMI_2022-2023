#include <iostream>

using namespace std;

void printSubArrays(int* arr, int n)
{
	for (int start = 0; start < n; start++)
	{
		for (int size = 0; size < n - start; size++)
		{
			cout << "[ ";

			for (int i = start; i <= start + size; i++)
			{
				cout << arr[i] << " ";
			}

			cout << "] ";
		}
	}
}

int main()
{
	int* arr = new int[5] {1, 23, 43, 5, 14};

	printSubArrays(arr, 5);

	delete[] arr;
}