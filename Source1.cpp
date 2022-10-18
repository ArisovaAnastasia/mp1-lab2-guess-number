#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int a, ans, num, b_high = 1001, b_low = 1, trys = 0;
	char ran;
	printf("Type '1' if you whant the program to guess a number\n");
	printf("Type '2' if you whant to guess a number by yourself\n");
	scanf_s("%i", &a);
	switch (a) {
	case 1:
		num = 1 + rand() % 1000;
		do {
			printf("Input a number: ");
			scanf_s("%i", &ans);
			if (ans > num) {
				printf("Guessed number is lower\n");
				trys += 1;
			}
			else if (ans < num) {
				printf("Guessed number is higher\n");
				trys += 1;
			}
			else {
				trys += 1;
				printf("Congratulations! You won! Tries: %i", trys);
			}
		} while (ans != num);
		break;
	case 2:
		printf("Input a numbber from 1 to 1000: ");
		scanf_s("%i", &num);
		ans = 0;
		do {
			ans = b_low + rand() % (b_high - b_low);
			printf("Is it %i?\n", ans);
			getchar();
			scanf_s("%c", &ran);
			if (ran == '>') {
				trys += 1;
				b_low = ans + 1;
			}
			else if (ran == '<') {
				trys += 1;
				b_high = ans;
			}
			else {
				trys += 1;
				printf("Tries: %i", trys);
			}
		} while (ans != num);
		break;
	default:
		printf("Incorrect value");
	}
	return 0;
}