
#include <iostream>

using namespace std;

int binarySearch(int* arr, int key, int low, int high)
{
    int mid = (high + low) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    if (low >= high)
    {
        return -1;
    }

    if (arr[mid] > key)
    {
        return binarySearch(arr, key, low, mid - 1);
    }
    else
    {
        return binarySearch(arr, key, mid + 1, high);
    }
}

int main()
{
    int* arr = new int[5] {1, 12, 53, 222, 500};


    cout << binarySearch(arr, 500, 0, 4);
}

