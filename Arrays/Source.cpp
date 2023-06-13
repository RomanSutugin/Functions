#include <iostream>
using namespace std;
//void FillRand(int arr[], const int n = 10);
//int Print(int arr[], const int n = 10);
int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int minValue(const int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
	cout << "Сумма элементов массива: " << Sum(arr, n);
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n);
	/*FillRand(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	int Print(arr[], n);*/
}

/*int Print()
{
	const int n = 10;
	for (int i = 0; i < n; i++)
	{
		int arr[i] = rand();
		return arr[i];
	}
}
void FillRand(int arr[], int n)
{
	for (int i = 1; i <n; i++)
	{
		const int n = 10;
		int arr[n];
		arr[i] = rand();
	}
	return	0;
}*/
int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)Sum(arr,n) / n;
}