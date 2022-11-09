#include <iostream>

using namespace std;

int const SIZE = 1000;

void print(const int arr[], int n) {

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

}

void addToArray(int arr[], int n, int num) {
	for (int i = 0; i < n; i++)
	{
		arr[i] += num;
	}
}

bool isPalindrome(int arr[], int n) {

	for (int i = 0; i < n / 2; i++)
	{
		if (arr[i] != arr[n - i - 1]) {
			return false;
		}
	}

	return true;
}


bool isConcatOfPalindromes(int arr[], int n) {
	if (isPalindrome(arr, n)) {
		return true;
	}

	for (int i = 0; i < n; i++)
	{
		if (isPalindrome(arr, i) && isPalindrome(arr + i, n - i)) {
			return true;
		}
	}
	return false;
}


int gcd(int n, int k)
{
	if (n < k) {
		int temp = n;
		n = k;
		k = temp;
	}

	while (k > 0)
	{
		int rem = n % k;
		n = k;
		k = rem;

	}

	return n;
}


int gcdOfArray(int arr[], int n)
{
	int result = arr[0];

	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}

int lcm(int n, int k)
{
	return (n * k / gcd(n, k));
}

int lcmOfArray(int arr[], int n) 
{
	int result = arr[0];

	for (int i = 1; i < n; i++) {
		result = (arr[i] * result / gcd(arr[i], result));
	}

	return result;
}

int inversionCount(int arr[], int n) 
{
	int result = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j]) {
				result++;
			}
		}
	}

	return result;
}

int main()
{
	int n;
	//cin >> n;
	int arr[SIZE]{ 1 ,2 ,3 ,2 ,1 ,4 ,5, 5, 10};
	cout << lcmOfArray(arr, 9);

}
