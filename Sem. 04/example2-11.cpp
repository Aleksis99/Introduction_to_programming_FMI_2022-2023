#include <iostream>

using namespace std;

unsigned int reverse(unsigned int n) {
    unsigned int result = 0;

    while (n > 0) {
        result *= 10;
        result += n % 10;
        n /= 10;
    }

    return result;
}

bool isPalindrome(unsigned int n) {
    return (n == reverse(n));
}

bool isSufix(unsigned int n, unsigned int k) {

    while (n > 0 && k > 0) {
        if (n % 10 != k % 10) {
            return false;
        }

        n /= 10;
        k /= 10;
    }

    return (k == 0);

}

bool isPrefix(unsigned int n, unsigned int k) {
    return (isSufix(reverse(n), reverse(k)));
}

bool isInfix(unsigned int n, unsigned int k) {
    
    while (n > 0 && k > 0) {
        if (isSufix(n, k)) {
            return true;
        }

        n /= 10;
    }

    return false;
}

bool isSortedAscending(unsigned int n) {
    int lastDigit = n % 10;
    n /= 10;

    while (n > 0) {
        if (n % 10 < lastDigit) {
            return false;
        }

        lastDigit = n % 10;
        n /= 10;
    }

    return true;
}

bool isSortedDescending(unsigned int n) {
    int lastDigit = n % 10;
    n /= 10;

    while (n > 0) {
        if (n % 10 > lastDigit) {
            return false;
        }

        lastDigit = n % 10;
        n /= 10;
    }

    return true;
}

bool isSorted(unsigned int n) {
    return (isSortedAscending(n) || isSortedDescending(n));
}

bool areAllDigitsEqual(unsigned int n) {
    return (isSortedAscending(n) && isSortedDescending(n));
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

int log(unsigned int n, unsigned int k) {
    int result = 0;

    while (power(k, result) <= n) {
        result++;
    }

    return result - 1;

}

double distance(double x1, double y1, double x2, double y2) {
    return (sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}

bool onSameCircle(double x1, double y1, double x2, double y2) {
    double e = 0.0001;

    return (
        abs(distance(0, 0, x1, y1) - distance(0, 0, x2, y2)) < e
        );
}

int main()
{
    double x1,  y1,  x2,  y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << onSameCircle(x1, y1, x2, y2);
}
