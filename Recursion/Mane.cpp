#include <iostream>
#include <conio.h>
using namespace std;

void elevator(int floor);


void main()
{
	setlocale(LC_ALL, "Rus");
	//cout << "Hello recutsion";
	//cout << "��� ������ ������� Escape, ��� ����������� ������� ����� ������" << endl;
	//if(_getch()!= 27)main();

	int floor;
	cout << "������� ����� ����� "; cin >> floor;
	elevator(floor);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor-1);
	cout << "�� �� " << floor << " �����\n";
}