#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts("Enter a card-name: ");
	scanf_s("%s", card_name, 3);
	int val = 0;
	if (card_name[0] == 'K') {
		val = 10;
	}
	else if (card_name[0] == 'Q') {
		val = 10;
	}
	else if (card_name[0] == 'J') {
		val = 10;
	}
	else if (card_name[0] == 'A') {
		val = 11;
	}
	else {
		val = atoi(card_name);
	}

	printf("Card value: %i\n", val);
	return 0;
}