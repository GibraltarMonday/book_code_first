#include <stdio.h>
#include <conio.h>

int main()

{
	char ex[20]; // ������� ������ �� 20 ��������
	puts("Enter her name:");
	scanf_s("%s", &ex, 20); // ex: ���, ��� ������, �������� ������ ������� ex
	//��� ������� scanf_s ���������� ��������� ������ ������ ������� � ��������� ��� � ������ ����� ������
	printf("Dear %s. It's all over. \n" , ex);
	_getch();
}