#include <stdio.h>
#include <conio.h>

int main()
{
	char suit = 'C';//��������� �������?
	switch (suit) { //��������� ���� � �� �� ���������� �� ������ ��������
	case 'D':
		puts("Diamonds");
		break;
	case 'C':
		puts("Clubs");
		break;
	case'H':
		puts("Hearts");
		break;
	default:
		puts("Spades");
	}
	_getch();
}