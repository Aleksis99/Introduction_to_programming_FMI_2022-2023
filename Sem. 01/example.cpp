#include <iostream>
using namespace std;

int main()
{
	//This a comment

	/*
		This is a multiline comment
	*/

	// thisIsCamelCase // used for variables

	// ThisIsPaskalCase

	// this_is_snake_case

	// ALL_CAPS_SNAKE_CASE // for constants


	int a					= -5;
	unsigned int b			= 2;// Only positive values
	const int constant		= 10;// contant = 20; WRONG!
	double d				= 5.5;
	float f					= 2;

	a = d;

	cout << 5/2 << endl;	//2
	cout << 5/2. << endl;	//2.5

	char ch = 97;

	cout << ch << endl;// a

	a = ch;

	cout << a << endl;// 97

	cout << (a = b) << endl;// 2

	bool flagTrue = true;
	bool flagFalse = false;

	cout << (flagTrue && flagFalse) << endl; // 0
	cout << (flagTrue && true) << endl; // 1
	cout << (false && flagFalse) << endl; // 0
	cout << (false || true) << endl; // 1
	cout << (!true) << endl; // 0

	flagTrue = a;

	cout << flagTrue << endl; // 1

	d = (int)d;

	cout << d << endl; // 5

	cout << (unsigned int)-1 << endl; // 4294967295

	cout << (INT_MAX + 1) << endl; // -2147483648

	a = 5;
	b = 5;

	a += 5; // a = a + 5

	cout << a << endl;

	cout << (a == b) << endl;// 0
	cout << (a == 10) << endl;// 0
	cout << (a != b) << endl;// 1 // (x != y) <=> !(x == y)

	cout << 5 % 2 << endl; // 1

	a = 5;
	b = 5;

	cout << (a += b += 5) << endl;

	cout << a << endl;	// 15 
	cout << b << endl;	// 10
	
	a = 5;
	b = 5;
	a++;
	cout << a << endl;	// 6 
	cout << a++ << endl;// 6 
	cout << a << endl;	// 7

	cout << ++b << endl; // 6

	a = 5;

	a *= 10;

	cout << a << endl; // 50
	a %= 10;

	cout << a; // 0
}