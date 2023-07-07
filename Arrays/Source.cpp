#include <iostream>
using namespace std;
template<typename T>
T Sum(T arr[], const int n);
template<typename T>
double Avg(const T arr[], const int n);


void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
	cout << "Сумма элементов массива: " << Sum(arr, n);
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n);
}

template<typename T>
T Sum(const T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
T Avg(const T arr[], const int n)
{
	return (double)Sum(arr,n) / n;
}