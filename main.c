#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mode;
    int n, a, attempts;
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
                printf("Number is lower\n");
        } while (a != n);
        printf("Nice! You Won!!! The number was %d\n", a);
        break;

    case 2:
        //do printf("Enter your option\n"); scanf("%d",&)
        break;
    }

    return 0;
}