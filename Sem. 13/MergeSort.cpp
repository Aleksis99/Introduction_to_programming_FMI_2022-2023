
#include <iostream>

using namespace std;

void Merge(int* a, int low, int high, int mid)
{
	int i, j, k;
	int* temp = new int[high - low + 1];

	i = low;
	k = 0;
	j = mid + 1;

	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for (i = low; i <= high; i++)
	{
		a[i] = temp[i - low];
	}

	delete[] temp;
}

void mergeSort(int* a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;

		mergeSort(a, low, mid);
		mergeSort(a, mid + 1, high);

		Merge(a, low, high, mid);
	}
}

int main()
{
    int* arr = new int[5] {12, 3, 11, 2, 113};

	mergeSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

