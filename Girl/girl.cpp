#include <stdio.h>
#include <conio.h>

int main()

{
	char ex[20]; // Создаем массив из 20 символов
	puts("Enter her name:");
	scanf_s("%s", &ex, 20); // ex: все, что вводим, помещаем внутрь массива ex
	//для функции scanf_s необходимо указывать помимо строки формата и указателя еще и размер блока данных
	printf("Dear %s. It's all over. \n" , ex);
	_getch();
}