#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int option, ansver, secret, max, min;
	char simbol;
	
	printf("���� �� ������ ���������� �����, ������� 1. ���� �� ������ �������� �����, ������� 2 \n");
	do
	{
		printf("�������� ��������. ���� �� ������ ���������� �����, ������� 1. ���� �� ������ �������� �����, ������� 2 \n");
		scanf_s("%i", &option);
	}
	while (option > 2 or option < 1);

	switch (option)
	{
	case 1:

		secret = 1 + rand() % (1000 - 1 + 1);
		printf("��������� �������� ����� �� 1 �� 1000 ������������. ������� ���� �������������. \n");
		do
		{
			scanf_s("%i", &ansver);
			if (ansver > secret)
			{
				printf("���������� ����� ������. ������� ����� \n");
			}
			else if (ansver < secret)
			{
				printf("���������� ����� ������. ������� ����� \n");
			}
			else
			{
				printf("�� �������.");
			}
		} 
		while (ansver = secret);
	
	break;

	case 2:

		printf("��������� ����� �� 1 �� 1000 ������������. \n");
		scanf_s("%i", &secret);
		ansver = 1 + rand() % (1000 - 1 + 1);
		min = 1;
		max = 1000;
		printf("��� %i? ���� ��������� ����� ������, ������� ���� >. ���� ���������� ����� ������, ������� ���� <. ���� ��������� �������, ������� ���� =.\n", ansver);
		scanf_s("%c", &simbol);
		do
		{
			scanf_s("%c", &simbol);
			if (simbol == '>')
			{
				min = ansver;
				ansver = min + rand() % (max - 1 + 1);
				printf("��� %i? ���� ��������� ����� ������, ������� ���� >. ���� ���������� ����� ������, ������� ���� <. ���� ��������� �������, ������� ���� =.\n", ansver);
			}
			else if (simbol == '<')
			{
				max = ansver;
				ansver = min + rand() % (max - 1 + 1);
				printf("��� %i? ���� ��������� ����� ������, ������� ���� >. ���� ���������� ����� ������, ������� ���� <. ���� ��������� �������, ������� ���� =.\n", ansver);
			}
			else if (simbol == '=')
			{
				printf("����� %i �������", ansver);
			}
		} 
		while (simbol != '=');

	break;
	}
	return 0;
}