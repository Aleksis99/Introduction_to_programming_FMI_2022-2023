#include <iostream>

using namespace std;

const int SIZE = 1000;

void mark(bool arr[], int n, int index) {

	for (int i = index + index; i < n; i+=index)
	{
		arr[i] = true;
	}
}

void eratosten(bool arr[], int n) {
	arr[0] = true;
	arr[1] = true;

	for (int i = 0; i < n; i++)
	{
		if (!arr[i]) {
			mark(arr, n, i);
		}
	}

}

int main()
{
	bool marked[SIZE]{ false };
	int n;

	cin >> n;

	eratosten(marked, n);

	for (int i = 0; i < n; i++)
	{
		if (!marked[i]) {
			cout << i << " ";
		}
	}
}
