#include <iostream>

using namespace std;

//Задача: Въвежда се число между 1 и 10. Отпечатайте дали е просто.

int main()
{
    int num;

    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Not in range";
    }
    else if (num == 2 || num == 3 || num == 5 || num == 7) {
        cout << "Prime";
    }
    else 
    {
        cout << "Not Prime";
    }
}
