#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));

	int a, b, d, k, p;
	char f;
	b = 0;
	k = 1000;
	p = 0;
	printf("enter the mode number");
	scanf_s("%c", &f);
	switch (f) {
	case '1':
		d = 0 + rand() % (1000 - 0 + 1);
		printf("enter a number");
		scanf_s("%i", &a);
		while (a != d)
		{
			if (a < d)
			{
				printf("the specified number is greater ");
				scanf_s("%i", &a);
				b += 1;
			}
			else if (a > d) {
				printf("the specified number is less ");
				scanf_s("%i", &a);
				b += 1;
			}

		}

		printf("%i", b);
		break;

	case '2':
		printf("enter a number");
		scanf_s("%i", &a);
		if (a > 1000 || a < 0) {
			printf("invalid number");
		}
		else {
			int h = 0 + rand() % (1000 - 0 + 1);
			char l;
			printf("%i", h);
			while (h != a) {
				printf("enter a sign");
				getchar();
				scanf_s("%c", &l);
				switch (l) {
				case '<':
					k = h-1;
					h = p + rand() % (k - p + 1);
					b += 1;
					if (h == a) {
						break;
					}
					else {
						printf("%i ", h);
						break;
					}
						break;
					
				case'>':
					p = h+1;
					h = p + rand() % (k - p + 1);
					b += 1;
					if (h == a) {
						break;
					}
					else {
						printf("%i ", h);
						break;
					}
					break;
					}
				}
			printf("%i ", h);
			printf(",");
				printf("%i ", b);
				printf("attempts");

			}

		}

	}
