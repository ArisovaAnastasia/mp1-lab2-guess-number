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
	
	printf("Если вы хотите отгадывать число, введите 1. Если вы хотите загадать чисто, введите 2 \n");
	do
	{
		printf("Неверное значение. Если вы хотите отгадывать число, введите 1. Если вы хотите загадать чисто, введите 2 \n");
		scanf_s("%i", &option);
	}
	while (option > 2 or option < 1);

	switch (option)
	{
	case 1:

		secret = 1 + rand() % (1000 - 1 + 1);
		printf("Программа загадала число от 1 до 1000 включительно. Введите ваше предположение. \n");
		do
		{
			scanf_s("%i", &ansver);
			if (ansver > secret)
			{
				printf("Загаданное число меньше. Введите новое \n");
			}
			else if (ansver < secret)
			{
				printf("Загаданное число больше. Введите новое \n");
			}
			else
			{
				printf("Вы угадали.");
			}
		} 
		while (ansver = secret);
	
	break;

	case 2:

		printf("Загадайте число от 1 до 1000 включительно. \n");
		scanf_s("%i", &secret);
		ansver = 1 + rand() % (1000 - 1 + 1);
		min = 1;
		max = 1000;
		printf("Это %i? Если загаданое число больше, введите знак >. Если загаданное число меньше, введите знак <. Если программа угадала, введите знак =.\n", ansver);
		scanf_s("%c", &simbol);
		do
		{
			scanf_s("%c", &simbol);
			if (simbol == '>')
			{
				min = ansver;
				ansver = min + rand() % (max - 1 + 1);
				printf("Это %i? Если загаданое число больше, введите знак >. Если загаданное число меньше, введите знак <. Если программа угадала, введите знак =.\n", ansver);
			}
			else if (simbol == '<')
			{
				max = ansver;
				ansver = min + rand() % (max - 1 + 1);
				printf("Это %i? Если загаданое число больше, введите знак >. Если загаданное число меньше, введите знак <. Если программа угадала, введите знак =.\n", ansver);
			}
			else if (simbol == '=')
			{
				printf("Число %i угадано", ansver);
			}
		} 
		while (simbol != '=');

	break;
	}
	return 0;
}