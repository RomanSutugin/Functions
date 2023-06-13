#include <iostream>
using namespace std;
#ifdef DEBUG
int Add(int a = 0, int b = 0, int c = 0); //объявление функции // b=0 - параметр по умолчанию, =0 - значение по умолчанию
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, double b);

#endif // DEBUG

int Factorial(int number);
int Power(int number_1, int power);

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef DEBUG
	cout << "Hello Functions" << endl;
	int a, b;
	cout << "Введите 2 числа "; cin >> a >> b;
	int c = Add(a); // использование функции Function call
	cout << a << "+" << b << " = " << c << endl;
	cout << a << "-" << b << " = " << Sub(a, b) << endl;
	cout << a << "*" << b << " = " << Mul(a, b) << endl;
	cout << a << "/" << b << " = " << Div(a, b) << endl;
#endif // DEBUG


	int number;
	cout << "Введите число: "; cin >> number;
	int result = Factorial(number);
	cout << "Факториал " << number << " = " << result << endl;

	int number_1;
	int power;
	cout << "Введите число: "; cin >> number_1;
	cout << "Введите степень: "; cin >> power;
	int result_1 = Power(number_1, power);
	cout << "Число " << number_1 << " в степени " << power << " = " << result_1 << endl;
}

#ifdef DEBUG
int Add(int a, int b, int c) //Addition - сложение // определение (реализация) функции
{
	int sum = a + b + c;
	return sum;
}
int Sub(int a, int b)
{
	return a - b;
	//Subtraction - вычитание
}
int Mul(int a, int b)
{
	//Multiplication-умножение
	return a * b;
}
double Div(int a, double b)
{
	return a / b;
}
#endif // DEBUG


int Factorial(int number)
{
	int result = 1;
	for (int i = 1; i <= number; i++)
	{
		result *= i;
	}
	return	result;
}

int Power(int number_1, int power)
{
	int result_1 = number_1;

	if (power == 1)
	{
		return number_1;
	}
	else if (power == 0)
	{
		return 1;
	}
	if (power < 0)
	{
		number_1 = 1 / number_1;
		power = -power;
	}
	else
	{
		for (int i = 2; i <= power; i++)
		{
			result_1 *= number_1;
		}
		return result_1;
	}
}