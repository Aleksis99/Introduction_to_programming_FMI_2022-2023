#include <iostream>

using namespace std;

int main()
{
	int a = 5;

	{
		int a = 10;

		cout << a << endl;//10
	}


	cout << a << endl;//5


	int num;

	cin >> num;

	if (num == 5)
		cout << "five";

	switch (num)
	{
	case 1:
		cout << "One";
		break;
	case 2:
	{
		cout << "Two";
		int square = num * num; // We need a new scope
		cout << square;
		break;
	}
	case 3:
	default:
		cout << "Nan";
	}


	int ternaryResult = (num == 10) ? num * num : num / 2;

	cout << ternaryResult<<endl;

	int temp;

	int lazy = temp = 5;

	cout << lazy << endl; //5

	cout << ( (lazy = 0 ) || (lazy = 10) ) << endl;

	cout << lazy << endl;//10

	cout << ((lazy = 10) && (lazy = 0)) << endl;

	cout << lazy << endl; //0
}