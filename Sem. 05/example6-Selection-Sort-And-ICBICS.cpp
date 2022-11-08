#include <iostream>

using namespace std;

const int SIZE = 1000;

void reverse(int arr[], int n) {

	for (int i = 0; i < n / 2; i++)
	{
		int temp = arr[i];

		arr[i] = arr[n - i - 1];

		arr[n - i - 1] = temp;
	}
}

void print(const int arr[], int n) {

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void selectionSort(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		int minIndex = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}

		int temp = arr[i];

		arr[i] = arr[minIndex];

		arr[minIndex] = temp;
	}
}

//I can't believe it can sort
void ICBIS(int arr[], int n) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[SIZE]{ 0, 12, 16, 20, 29, 100 };
	int out[SIZE];

	reverse(arr, 6);
	ICBIS(arr, 6);

	print(arr, 6);
}
