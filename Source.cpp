#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <iostream>

int main() {
	int min = 1, max = 1000;
	int mode;
	int rand();
	int a;
	int k = 0;
	char key;
	srand(time(NULL));
	
	int b = min + rand() % (max - min + 1);

	do {
		printf("Choose the mode\n");
		scanf_s("%i", &mode);
	} while (mode < 1 || mode > 2);
	switch (mode) {
	case 1:
		printf(" Enter your number (1-1000)\n");
		k += 1;
		do
		{
			scanf_s("%i", &a);
			if (a > b) {
				printf("Number is less\n");
			}
			else if (a < b)
			{
				printf("Number is greater\n");

			}
		} while (a != b);

		printf("You won");

		break;

	case 2:

		printf("Guess a number in the range from 1 to 1000\n");
		printf("If your number is greater, then enter the sign '>', if your number is less, then enter the sign '<', and if your number is equal, then enter the sign '='\n");
		
		do {
		scanf_s("%i", &a);
		if (min > a || a > max);
		printf("Incorrect number entered\n");
		} while (min > a || a > max);

       

		while (a != b) {

			
			b = (min + max) / 2;

			printf("It this: %i?\n", b);
			getchar();
			scanf_s("%c", &key);

			switch (key) {
			case '<':
				max = b;
				break;
			case '>':
				min = b;
				break;
			case '=':
				printf("guessed it\n");
				break;
			}
		}

		break;
	}return 0;
}
