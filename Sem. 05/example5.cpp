#include <iostream>

using namespace std;

const int SIZE = 1000;

void print(const int arr[], int n) {

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout<<endl;
}

void reverse(int arr[], int n) {

	for (int i = 0; i < n/2; i++)
	{
		int temp = arr[i];

		arr[i] = arr[n - i - 1];

		arr[n - i - 1] = temp;
	}
}

void reverseInAnotherArr(const int arr[], int n, int ourArr[]) {
	for (int i = 0; i < n; i++)
	{
		ourArr[n - 1 - i] = arr[i];
	}
}

int main()
{
	int arr[SIZE]{ 0, 12, 16, 20, 29, 100 };
	int out[SIZE];

	reverseInAnotherArr(arr, 6, out);

	print(arr, 6);
	print(out, 6);
}
