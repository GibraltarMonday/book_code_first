#include <stdio.h>
#include <conio.h>

int main()

{
	int card_count = 11;
	if (card_count > 10)
		{	puts("Lucky cards. Increase");
	}
	else if (card_count < 9) {
		puts("Skip");
	}
	_getch();
}
