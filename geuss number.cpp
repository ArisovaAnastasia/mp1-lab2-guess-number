#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    srand(2007);
    int type;
    do
    {
        printf("Choose type:");
        scanf("%d", &type);
    } while (type > 2 || type < 1);

    if (type == 1)
    {
        int ans = rand() % 1000 + 1, guesses = 0;
        int n;
        while (true)
        {
            printf("Guess number:");
            scanf("%d",&n);
            guesses++;
            if (n > ans)
            {
                printf("Smaller\n");
            }
            else if (n == ans)
            {
                printf("You are right!You took %d attemps\n",guesses);
                break;
            }
            else
            {
               printf("Bigger\n");
            }
        }
    }
    else
    {
        int l = 0, r = 1001,guesses=0;
        int mid,n;
        do
        {
            printf("Your number is:");
            scanf("%d", &n);
        } while (1 > n || n > 1000);

        while (true)
        {
            mid = (r + l) / 2;
            printf("Your number is:%d?", mid);
            guesses++;
            char ans;
            getchar();
            scanf("%c",&ans);
            if (ans == '=')
            {
                printf("Hooray!,I took %d attempts",guesses);
                return 0;
            }
            else if (ans == '<')
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
           
        }
    }
}

