#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
	srand(time(NULL));

	int a, b,d,k,p;
	char f,l;
	b = 0;
	k = 1000;
	p = 0;
	printf("vvedite nomer regima");
	scanf_s("%c", &f);
	switch (f) {
	case '1':
		 d = 0 + rand() % (1000 - 0 + 1);
		printf("vvedite chislo");
			scanf_s("%i", &a);
		while (a != d)
		{
			if (a < d)
			{
				printf("zagadannoe chislo bolshe");
				scanf_s("%i",&a);
				b += 1;
			}
			else if (a > d) {
				printf("zagadannoe chislo menshe");
				scanf_s("%i",&a);
				b += 1;
			}

		}

		printf("%i", b);
		break;

	case '2':
		printf("vvedite zagadannoe chislo");
		scanf_s("%i" ,&a);
		d = 0;
		printf("vvedite znak");
		scanf_s("%c", &l);
		switch (l) {
		case '<':
			k = d;
			d = k + rand() % (p- k+ 1);
			b += 1;
			break;
		case '>':
			p = d;
			d = k + rand() % (p - k + 1);
			b += 1;
			break;
		case '=':
			printf("%i", b-1);
			break;
			
		}
		
	}	

}