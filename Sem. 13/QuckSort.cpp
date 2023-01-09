
#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int temp = a;

    a = b;
    b = temp;
}

int partition(int* arr, int low, int high)
{
    int pivotPosition = low;
    int pivot = arr[high];

    for (int i = low; i < high; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[pivotPosition]);
            pivotPosition++;
        }
    }

    swap(arr[pivotPosition], arr[high]);

    return pivotPosition;
}

void quickSort(int* arr, int low, int high)
{
    if (low < high)
    {
        int pivotPosition = partition(arr, low, high);

        quickSort(arr, low, pivotPosition - 1);
        quickSort(arr, pivotPosition + 1, high);
    }

}

int main()
{
    int* arr = new int[5] {12, 3, 11, 2, 113};


    quickSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

