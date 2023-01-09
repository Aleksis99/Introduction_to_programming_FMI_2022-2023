
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

//quick select
int kthSmallest(int arr[], int l, int r, int k)
{

    if (k > 0 && k <= r - l + 1) 
    {
        int index = partition(arr, l, r);

        if (index - l == k - 1)
            return arr[index];

        if (index - l > k - 1)
            return kthSmallest(arr, l, index - 1, k);

        return kthSmallest(arr, index + 1, r,
            k - index + l - 1);
    }

    return INT_MAX;
}

int main()
{
    int* arr = new int[5] {12, 3, 11, 2, 113};


    cout << kthSmallest(arr, 0, 4, 2);

}

