#include <iostream>

using namespace std;

int abs(int n) {

    if (n < 0)return -n;

    return n;
}

int lenght(int n) {
    n = abs(n);

    int count = 0;

    if (n == 0)return 1;

    while (n > 0) {
        n /= 10;
        count++;
    }

    return count;
}

double distance(double x1, double x2, double y1, double y2) {

    return (sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}

double permiter(
    double x1, double x2,
    double y1, double y2,
    double z1, double z2) 
{
    double result = 0;

    result += distance(x1, x2, y1, y2);
    result += distance(x1, x2, z1, z2);
    result += distance(y1, y2, z1, z2);

    return result;

}

bool isPrime(unsigned int n) {

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void allPrimePairs(unsigned int n) {

    for (int i = 2; i <= n/2; i++)
    {
        if (isPrime(i) && isPrime(n - i)) {
            cout << i << " " << (n - i) << endl;
        }
    }
}

unsigned int power(unsigned int n, unsigned int k) {
    int result = n;

    if (k == 0) {
        return 1;
    }

    for (int i = 1; i < k; i++)
    {
        result *= n;
    }

    return result;
}

bool isPower(unsigned int n) {
    
    for (int x = 2; x <= n / 2; x++)
    {
        for (int y = 2; y <= n / 2; y++)
        {
            int pow = power(x, y);
            if (power(x, y) == n) {
                return true;
            }

            if (pow > n) {
                break;
            }
        }
    }

    return false;
}

void printNaturalPowers(unsigned int a, unsigned int b) {
    for (int i = a; i <=  b; i++)
    {
        if (isPower(i)) {
            cout << i << endl;
        }
    }
}

unsigned int reverse(unsigned int n) {
    unsigned int result = 0;

    while (n > 0) {
        result *= 10;
        result += n % 10;
        n /= 10;
    }

    return result;
}

unsigned int reverseAndConcat(unsigned int n) {
    unsigned int result = reverse(n) * power(10, lenght(n)) + n;

    return result;
}

int countDigitOccurences(int n, int digit){

    if (digit > 9 || digit < 0) {
        return -1;  //invalid input
    }

    int count = 0;

    if (n == 0 && digit == 0) {
        return 1;
    }

    while (n != 0)
    {
        if (n % 10 == digit) {
            count++;
        }

        n /= 10;
    }

    return count;
}

unsigned int addDigitNTimes(unsigned int number, unsigned int digit, unsigned int n) {

    for (int i = 0; i < n; i++)
    {
        number *= 10;
        number += digit;
    }

    return number;
}


unsigned int sortNumber(unsigned int n) {

    int result = 0;

    for (int i = 0; i < 10; i++)
    {
        int count = countDigitOccurences(n, i);
        result = addDigitNTimes(result, i, count);
    }

    return result;
}

int main()
{
    int a;
    cin >> a ;

    cout<< sortNumber(a);
}
