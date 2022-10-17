#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    if (a >= b) {

        if (b >= c) {
            cout << a << " " << b << " " << c << endl;
        }
        else if(a >= c){
            cout << a << " " << c << " " << b << endl;
        }
        else {
            cout << c << " " << a << " " << b << endl;
        }
    }
    else if (b >= c) {

        cout << b << " ";

        if (c > a) {
            cout << c << " " << a;
        }
        else {
            cout << a << " " << c;
        }
    }
    else {
        cout << c << " " << b << " " << a << endl;
    }
}
