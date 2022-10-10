#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    n /= 3;

    cout << (n * (n + 1) / 2) * 3;
}

