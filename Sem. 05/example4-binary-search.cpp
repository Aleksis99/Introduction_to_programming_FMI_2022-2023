#include <iostream>

using namespace std;

const int SIZE = 1000;


int binarySearch(int arr[], int n, int key) {
	int l = 0, h = n - 1;
	int mid = (l + h) / 2;
	while (l <= h) {
		if (arr[mid] == key) {
			return mid;
		}
		else if (arr[mid] > key) {
			h = mid - 1;
		}
		else {
			l = mid + 1;
		}

		mid = (l + h) / 2;
	}

	return -1;
}

int main()
{
	int arr[SIZE]{ 0, 12, 16, 20, 29, 100 };

	cout << binarySearch(arr, 6, 101);
}
