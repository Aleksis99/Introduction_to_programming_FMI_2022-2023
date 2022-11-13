#include <iostream>

using namespace std;

const int SIZE = 100000;

bool isValidK(int arr[], int n, int k)
{
    for (int i = 0; i < n - k; i++)
    {
        if (abs(arr[i] - arr[i + k]) != k)
        {
            return false;
        }
    }

    return true;
}

int findMaxK(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        if(isValidK(arr, n, i))
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[SIZE];
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxK = findMaxK(arr, n);

    if (maxK != -1)
    {
        cout << maxK;
    }
    else
    {
        cout << "No solution";
    }
}
