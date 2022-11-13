#include <iostream>

using namespace std;

bool isEven(int n)
{
    return n % 2 == 0;
}

bool isFunny(int n)
{
    n = abs(n);

    int lastDigit = n % 10;

    n /= 10;

    while (n > 0)
    {
        int currDigit = n % 10;
        if (isEven(lastDigit) == isEven(currDigit))
        {
            return false;
        }

        n /= 10;
    }

    return true;
}

int sumOfDigits(int n)
{
    n = abs(n);
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;

        n /= 10;
    }

    return sum;
}

int main()
{
    int a, b;

    cin >> a >> b;

    int sum = 0;

    for (int i = a; i <= b; i++)
    {
        if (isFunny(sumOfDigits(i)))
        {
            sum += i;
        }
    }

    cout<< sum;
}
