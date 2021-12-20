#include <iostream>
using namespace std;

int main()
{
	const int n = 10;
	int arr[10] = { 7,8,9,2,3,1,4,5,6,10 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	for (int i = 1; i < n; i++)
	{
		int b = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > b)
		{
			arr[j + 1] =arr[j];
			j--;
		}
		arr[j + 1] = b;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
}