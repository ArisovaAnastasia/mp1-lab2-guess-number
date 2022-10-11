#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void main()
{
	srand(time(NULL));
	int modes, random, user, count, answer_for_pc, max, min;
	printf("Program have 2 modes \n");
	printf("First mode : program have a number from 1 to 1000, user need guess this number, program write <, >, or = \n");
	printf("When user choose right number - program complete \n");
	printf("Second: User have a number from 1 to 1000, program try guess, user write <, >, or = \n");
	printf("When program choose right number - program complete \n");
	printf("Choose first or second mode: ");
	scanf_s("%i", &modes);
	while (2 < modes || modes == 0)
	{
		printf("Wrong mode. Try to choose your mode one more time: ");
		scanf_s("%i", &modes);
	}
	if (modes == 1)
	{
		random = 1 + rand() % (1000 - 1 + 1);
		printf("%i \n", random);
		count = 1;
		printf("First program \n");
		printf("Guess a number: ");
		scanf_s("%i", &user);
		while (user != random)
		{
			if (user < random)
			{
				printf("> \n");
				printf("Guess a number one more time: ");
				scanf_s("%i", &user);
				count += 1;
			}
			else if (user > random)
			{
				printf("< \n");
				printf("Guess a number one more time: ");
				scanf_s("%i", &user);
				count += 1;
			}
		}
		printf("= \n");
		printf("Number of attempts - %i", count);
	}
	else
	{
		printf("Second program(Info for user. 1 - <, 2 - >, 3 - =) \n");
		printf("Write a number: \n");
		scanf_s("%i", &user);
		random = 1 + rand() % (1000 - 1 + 1);
		count = 1;
		max = 1000;
		min = 1;
		printf("Computer: is it %i? \n", random);
		printf("Answer for computer: ");
		scanf_s("%i", &answer_for_pc);
		while (answer_for_pc != 3)
		{
			if (answer_for_pc == 1)
			{
				max = random - 1;
				random = min + rand() % (max - min + 1);
				count += 1;
				printf("Computer: is it %i? \n", random);
				printf("Answer for computer: ");
				scanf_s("%i", &answer_for_pc);
			}
			if (answer_for_pc == 2)
			{
				min = random + 1;
				random = min + rand() % (max - min + 1);
				count += 1;
				printf("Computer: is it %i? \n", random);
				printf("Answer for computer: ");
				scanf_s("%i", &answer_for_pc);
			}
		}
		printf("= \n");
		printf("Number of attempts - %i", count);
	}
}