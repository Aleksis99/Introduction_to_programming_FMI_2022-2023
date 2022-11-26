#include <iostream>

using namespace std;

const int SIZE = 100;

void initMatrix(int matrix[][SIZE], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void printMatrix(int matrix[][SIZE], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<< matrix[i][j] << " " ;
		}
		cout << endl;
	}
}

void transpone(int matrix[][SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}

int main()
{
	int matrix[SIZE][SIZE];
	int n;

	cin >> n;

	initMatrix(matrix, n, n);


	transpone(matrix, n);

	printMatrix(matrix, n, n);
}
