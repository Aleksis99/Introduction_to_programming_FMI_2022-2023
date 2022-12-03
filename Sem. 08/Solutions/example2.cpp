#include <iostream>

using namespace std;


void inputMatrix(int**& matrix, int& n, int*& sizes )
{

	int m;

	cin >> n;


	matrix = new int*[n];

	sizes = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		sizes[i] = m;

		matrix[i] = new int[m];

		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

}

int* concat( int* arr1, int n, int* arr2, int m)
{
	int* newArr = new int[n + m];

	for (int i = 0; i < n; i++)
	{
		newArr[i] = arr1[i];
	}

	for (int i = 0; i < m; i++)
	{
		newArr[i + n] = arr2[i];
	}

	return newArr;
}

int** mergeRows( int** matrix, int n, int* sizes)
{
	int newN = (int)ceil(n / 2.);

	int** newMatrix = new int* [newN];

	for (int i = 0; i < n / 2; i++)
	{
		newMatrix[i] = concat(matrix[i], sizes[i], matrix[n - 1 - i], sizes[n - 1 - i]);
	}

	if (n % 2 == 1)
	{
		newMatrix[newN - 1] = new int[sizes[newN - 1]];

		for (int i = 0; i < sizes[newN - 1]; i++)
		{
			newMatrix[newN - 1][i] = matrix[newN - 1][i];
		}
	}

	return newMatrix;
}

int main()
{
	int** matrix;
	int* sizes;
	int n;
	inputMatrix(matrix, n, sizes);

	int** newMatrix = mergeRows(matrix, n, sizes);

	for (int i = 0; i < ceil(n/2.); i++)
	{
		if (n % 2 == 1 && i == n / 2 + 1) 
		{
			for (int j = 0; j < sizes[i]; j++)
			{
				cout << newMatrix[i][j] << " ";
			}
			cout << endl;
		}
		else 
		{
			for (int j = 0; j < sizes[i] + sizes[n - 1 - i]; j++)
			{
				cout << newMatrix[i][j] << " ";
			}
			cout << endl;
		}
	}
}
