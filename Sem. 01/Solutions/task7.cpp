
#include <iostream>
using namespace std;


int main()
{
    int money;

    cin >> money;

    int hundreds = money / 100;

    money %= 100;

    int fifties = money / 50;

    money %= 50;

    int twenties = money / 20;

    money %= 20;

    int tens = money / 10;

    money %= 10;

    int fives = money / 5;

    money %= 5;

    int twoes = money / 2;

    money %= 2;

    int ones = money;

    cout << hundreds << "x100lv "
        << fifties << "x50lv "
        << twenties << "x20lv "
        << tens << "x10lv "
        << fives << "x5lv "
        << twoes << "x2lv "
        << ones << "x1lv";
}

