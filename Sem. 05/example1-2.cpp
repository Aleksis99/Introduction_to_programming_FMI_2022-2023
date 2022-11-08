#include <iostream>

using namespace std;

int const SIZE = 1000;

void print(const int arr[], int n) {

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

}

void addToArray(int arr[], int n, int num) {
	for (int i = 0; i < n; i++)
	{
		arr[i] += num;
	}
}

int index(const int arr[], int n, int key) {
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key) {
			return i;
		}
	}

	return -1;
}


int main()
{
	int n;
	cin >> n;
	int arr[SIZE];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	addToArray(arr, n, n);
	print(arr, n);
}
