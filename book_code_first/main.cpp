#include <stdio.h>
#include <conio.h>

int main()
{
	char suit = 'C';//одинарные кавычки?
	switch (suit) { //проверяет одну и ту же переменную на разные значения
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