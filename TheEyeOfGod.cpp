#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
int main() 
{
	setlocale(0, "");
	srand(time(NULL));
	int centr;
	int max = 1001;
	int min = 0;
	char ans;
	int a = 0;
	int r;
	int count = 0;
	int d1 = 1 + rand() % (1000 - 1 + 1);
	int d2 = -1;
	printf("Выберите режим программы: 1 - угадываете число компьютера, 2 - компьютер угадывает вас\n");
	scanf_s("%d", &r);
	switch (r) {
	case 1:
		while (a != d1) {
			printf("Введите число");
			scanf_s("%d", &a);
			count += 1;
			if (d1 == a)
				printf("Вы угадали число, количество попыток = %d\n", count);
			else {
				if (a > d1)
					printf("Загаданное число меньше\n");
				if (a < d1)
					printf("Загаданное число больше\n");
			}
		}
		break;
	case 2:
		printf("Загадайте число от одного до тысячи\n");
		do {
			scanf_s("%d", &a);
			if (a > 1000 || a < 0) {
				printf("Введено не правильное число\n");
			}
		} while (a > 1000 || a < 0);
		while (true) {
			d2 = (max + min) / 2;
			printf("Ваше число %d ?", d2);
			count += 1;
			getchar();
			scanf_s("%c", &ans);
			if (ans == '=') {
				printf("Число угадано, потребовалось %d попыток\n", count);
				break;
			}
			else if (ans == '<')
				max = d2;
			else if (ans == '>')
				min = d2;
		}
		break;
	default:
		printf("Такого режима нет\n");
	}
	return 0;
}