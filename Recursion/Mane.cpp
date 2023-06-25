#include <iostream>
#include <conio.h>
using namespace std;

void elevator(int floor);
int Factorial(int number);
int Power(int n, int power);
void Fibonacci_1(int a, int b, int limit);


void main()
{
	setlocale(LC_ALL, "Rus");
	//cout << "Hello recutsion";
	//cout << "��� ������ ������� Escape, ��� ����������� ������� ����� ������" << endl;
	//if(_getch()!= 27)main();

	/*int floor;
	cout << "������� ����� ����� "; cin >> floor;
	elevator(floor);*/

	int number;
	cout << "������� �����: "; cin >> number;
	cout << "��������� ����� " << number << "=" << Factorial(number) << endl;

	int n;
	int power;
	cout << "������� �����: "; cin >> n;
	cout << "������� �������: "; cin >> power;
	int result = Power(n, power);
	cout << "����� " << n << " � ������� " << power << " = " << Power(n, power) << endl;

	int limit;
	cout << "������� ������ ���� ���������: "; cin >> limit;
	cout << "��� ��������� �� " << limit << ":" << endl;
	Fibonacci_1(0, 1, limit);

}

#ifdef DEBUG
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����\n";
}
#endif // DEBUG


int Factorial(int number)
{
	if (number == 0)
		return 1;
	else
	{
		return number * Factorial(number - 1);
	}
}

int Power(int n, int power)
{
	if (power == 1)
		/*{
		return n;
	}
	else if (power == 0)
	{
		return 1;
	}
	else if (power>0)return n * Power(n, power - 1);
	else return 1/Power(n, -power);*/
	return n == 0 ? 1 : power > 0 ? n * Power(n, n - 1) : 1 / Power(n, -power);
}

void Fibonacci_1(int a, int b, int limit)
{
	if (a >= limit)
	{
		return;
	}
	cout << a << "\t";
	Fibonacci_1(b, a + b, limit);
}