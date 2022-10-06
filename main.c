#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mode;
    char hint; 
    int n, a, attempts;
    int lower = 1, upper = 1000;

    time_t t;
    srand((unsigned)time(&t));
    
    do {
        printf("Choose the mode\n");
        scanf("%d", &mode);
    } 
    while (mode < 1 || mode > 2);

    switch (mode)
    {
    case 1:
        n = 1 + rand() % 1000;
        printf("Enter your option %d\n", n);
        do
        {
            scanf("%d", &a);
            if (a < n)
                printf("Number is greater\n");
            else if (a > n)
                printf("Number is less\n");
            attempts++;
        } while (a != n);
        printf("Nice! You Guessed!!! The number was %d\n Number of attempts: %d", a, attempts);

        break;

    case 2:
        do {
            printf("Enter your option\n");
            scanf("%d",&n);
        }
        while (n < 1 || n > 1000);

        do {
            a = lower + rand() % (upper - lower + 1);
            printf("Is it %d ???\n",a);
            getchar();

            switch (getchar()) {
                case '<':
                    upper = a;
                    break;

                case '>':
                    lower = a;
                    break;
                case '=':
                    printf("Hooray!!! I've Won! The number is %d\n",a);
                    break;
            }
        }
        while (a != n);

        break;

    }

    return 0;
}