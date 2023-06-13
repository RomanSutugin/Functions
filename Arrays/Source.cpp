#include <iostream>
using namespace std;
void FillRand(int arr, const int n=10);
int Print(int arr, const int n = 10);


void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
	/*FillRand(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}*/
	int Print(arr, n);
}

int Print()
{
	for (int i = 0; i < n; i++)
	{
		int arr[n] = rand();
		return arr[i];
	}
}
/*void FillRand(int arr, int n)
{
	for (int i = 1; i <n; i++)
	{
		int arr[n];
		arr[i] = rand();
	}
	return	0;
}