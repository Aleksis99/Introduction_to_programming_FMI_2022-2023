#include <iostream>

using namespace std;

int main()
{
    int n, k, gcd = 1;

    cin >> n >> k;

    if (n < k) {
        int temp = n;
        n = k;
        k = temp;
    }

    while (k > 0) 
    {

        int rem = n % k;
        n = k;
        k = rem;

    }

    cout << n;
}
