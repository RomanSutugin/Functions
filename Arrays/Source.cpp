#include"stdfx.h"
#include"Sum.h"
#include"Avg.h"


void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n);
}