#include <iostream>
#include <conio.h>
using namespace std;

void elevator(int floor);


void main()
{
	setlocale(LC_ALL, "Rus");
	//cout << "Hello recutsion";
	//cout << "Для выхода нажмите Escape, для продолжения нажмите любую кнопку" << endl;
	//if(_getch()!= 27)main();

	int floor;
	cout << "Введите номер этажа "; cin >> floor;
	elevator(floor);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor-1);
	cout << "Вы на " << floor << " этаже\n";
}