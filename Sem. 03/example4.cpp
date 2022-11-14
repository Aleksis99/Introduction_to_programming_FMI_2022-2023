#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    bool isPrime = true;

    if (n < 2) 
    {
        isPrime = false;
    }
    else 
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    cout << isPrime;
}
