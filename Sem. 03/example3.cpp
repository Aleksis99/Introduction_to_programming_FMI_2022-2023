#include <iostream>

using namespace std;

int main()
{
    int n, rev = 0;

    cin >> n;

    while (n > 0) {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }

    rev++;

    cout << rev;
}
