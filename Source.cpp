#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <iostream>

int main() {
	int min = 1, max = 1000;
	int mode;
	int a;
	int k1 = 0;
	int k2 = 0;
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
		
		do
		{
			scanf_s("%i", &a);
			if (a > b) {
				printf("Number is less\n");
				k1 += 1;
			}
			else if (a < b)
			{
				printf("Number is greater\n");
				k1 += 1;

			}
		} while (a != b);

		printf("You won! Number of attempts = %d\n", k1);

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

			k2 += 1;
			
			b = (min + max) / 2;

			printf("It this: %i?\n", b);
			getchar();
			scanf_s("%c", &key);

			switch (key) {
			case '<':
				max = b-1;
				break;
			case '>':
				min = b+1;
				break;
			case '=':
				printf("guessed it! Number of attempts = %d\n", k2);
				break;
			}
		}

		break;
	}return 0;
}
