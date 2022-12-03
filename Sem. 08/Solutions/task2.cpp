#include <iostream>

using namespace std;

void printArr(const int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void partition(int*& arr, int n, int pivotIndex)
{
	int pivot = arr[pivotIndex];

	int* newArr = new int[n];

	int index = 0;

	int pivotCount = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < pivot)
		{
			newArr[index++] = arr[i];
		}
		else if (arr[i] == pivot)
		{
			pivotCount++;
		}
	}

	for (int i = 0; i < pivotCount; i++)
	{
		newArr[index++] = pivot;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > pivot)
		{
			newArr[index++] = arr[i];
		}
	}

	delete[] arr;

	arr = newArr;
}

void partitionLomuto(int* arr, int n, int pivotIndex)
{
	int pivot = arr[pivotIndex];

	swap(arr[pivotIndex], arr[n - 1]);

	int pivotPosition = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] < pivot) 
		{
			swap(arr[i], arr[pivotPosition++]);
		}
	}

	swap(arr[n - 1], arr[pivotPosition]);
}

int main()
{
	int* arr = new int[5] {1, 23, 43, 5, 14};

	partition(arr, 5, 4);

	printArr(arr, 5);

	delete[] arr;
}