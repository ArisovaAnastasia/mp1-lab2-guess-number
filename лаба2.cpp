#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	srand(time(NULL));
	int regime,usernumber, guessednumber, attempts = 0;
	char sm;
	printf_s("If you want to guess number, type 1. If you want programm to guess number, type 2.\n");
	scanf_s("%i", &regime);
	if (regime == 1)
	{
		guessednumber = 1 + rand() % 1000;
		printf_s("I thought a number. Guess what number: ");
		do
		{
			attempts += 1;
			scanf_s("%i", &usernumber);
			if (usernumber > guessednumber)
				printf_s("It is less\n");
			else if (usernumber < guessednumber)
				printf_s("It is bigger\n");
		} while (guessednumber != usernumber);
		printf_s("Yes, you right. It is %i\n", usernumber);
		printf_s("You guessed it on %i attempt", attempts);
	}
	else if (regime == 2)
	{
		do
		{
			printf_s("Input correct data: ");
			scanf_s("%i", &usernumber);
		} while (usernumber < 1 || usernumber > 1000);
		int maxlim = 1000, minlim = 1;
		guessednumber = 1 + rand() % 1000;
		printf_s("%i\n", guessednumber);
		do
		{
			attempts += 1;
			getchar();
			printf_s("Type your symbol: ");
			scanf_s("%c", &sm);
			if (sm == '>')
			{	
				if (minlim < guessednumber)
				{
					minlim = guessednumber;
				}
				guessednumber = minlim + rand() % (maxlim - minlim + 1);
				printf_s("%i\n", guessednumber);

			}
			else if (sm == '<')
			{
				if (maxlim > guessednumber)
				{
					maxlim = guessednumber;
				}
				guessednumber = minlim + rand() % (maxlim - minlim + 1);
				printf_s("%i\n", guessednumber);
			}
		} while (sm != '=');
		printf_s("Oh, yes. Its %i\n", guessednumber);
		printf_s("You made it on %i attempt", attempts);

	}
	else
		printf("Wrong number");
}