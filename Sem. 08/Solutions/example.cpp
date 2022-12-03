#include <iostream>

using namespace std;

void inputArr(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void printArr(const int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void printMatrix(const int** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}
}

void inputMatrix(int** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void merge(int* arr1, int size1, const int* arr2, int size2)
{
	int* resultArr = new int[size1 + size2];

	int index1 = 0;
	int index2 = 0;
	int currIndex = 0;

	while (index1 < size1 && index2 < size2)
	{
		if (arr1[index1] <= arr2[index2])
		{
			resultArr[currIndex++] = arr1[index1++];
		}
		else
		{
			resultArr[currIndex++] = arr2[index2++];
		}
	}

	while (index1 < size1)
	{
		resultArr[currIndex++] = arr1[index1++];
	}

	while (index2 < size2)
	{
		resultArr[currIndex++] = arr2[index2++];
	}

	delete[] arr1;

	arr1 = resultArr;
}


int main()
{
	int n, m;
	cin >> n >> m;

	int* arrA = new int[n];
	int* arrB = new int[m];

	inputArr(arrA, n);
	inputArr(arrB, m);

	merge(arrA, n, arrB, m);

	printArr(arrA, n + m);

	delete[] arrA;
	delete[] arrB;
}
