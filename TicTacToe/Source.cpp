#include <iostream>
#include <conio.h>
using namespace std;
void Move(int key);


#define VERTICAL_OFFSET		 "\n\n\n\n\n"
#define HORIZONTAL_OFFSET	 "\t\t\t\t\t"

void PrintField(char field[], const int n);

void main()
{
	setlocale(LC_ALL, " ");
	const int n = 9;
	char field[n] = { /*1,2,3,4,5,6,7,8,9*/ };
	PrintField(field, n);
	Move(key);
}

void PrintField(char field[], const int n)
{
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_OFFSET;
		cout << "   ";
		for (int j = 0; j < 3; j++)
		{
			cout << /*(int)*/field[i + j];
			if (j < 2) cout << " | ";
		}
		cout << endl;
		cout << HORIZONTAL_OFFSET;
		if(i>0) cout << "--- --- ---";
		cout << endl;
	}
}

void Move(int key)
{
	key = _getch()
		if (key == 1)
			char field[n] = { char(88), , , , , , , , };
	void Move(key)
}