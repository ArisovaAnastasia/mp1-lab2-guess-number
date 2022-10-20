# include <stdio.h>
#include<math.h>
# include <stdlib.h>
# include <time.h>
int main()
{
	time_t t;
	srand((unsigned)time(&t));

	int n = 1 + rand() % 1000;
	int i = 1, r, s, p = 0;
	
	int mode;

	int min = 0, max = 1001;

	do {
		printf("mode selection:");
		scanf_s("%d", &mode);

	} while (mode < 1 || mode > 2);
	switch (mode)
	{
	case 1:
		printf("enter the number from 1 to 1000:");
		do
		{
			scanf_s("%d", &r);
			if (r > n)
			{
				printf("hidden number is greater, enter next number:");
				i += 1;
			}
			else if (r < n)
			{
				printf("hidden number is less, enter next number:");
				i += 1;
			}
		} while (r != n);
		{
			printf("guessed right, \n");
			printf("number of attempts:");
			printf("%d", i);
		}
		break;
	case 2:
		do {
			printf("enter your number:\n");
			scanf_s("%d", &s);
		} while (s < 1 || s > 1000);

		while (true)
		{
			r = min + rand() % (max - min + 1);
			printf("right?: %d?", r);
			p += 1;
			char n;
			getchar();
			scanf_s("%c", &n);
			if (n == '=')
			{
				printf("guessed right \nnumber of attempts:");
				printf("%d", p);
				return 0;
			}
			else if (n == '<')
			{
				max = r;
			}
			else
			{
				min = r;
			}
		}
		break;

	}
}