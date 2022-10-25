#include <iostream>

using namespace std;

int main()
{
    int n, max, second;
    cin >> n >> max >> second;

    if (max < second) 
    {
        int temp = max;
        max = second;
        second = max;
    }

    int curr;

    for (int i = 1; i <= n-2; i++)
    {
        cin >> curr;

        if (curr > max) 
        {
            second = max;
            max = curr;
        }
        else if (curr > second) 
        {
            second = curr;
        }

    }

    cout << max << " " << second;
}

