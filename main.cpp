#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    int Mod, answer;
    printf("Если хотите угадывать число введите 1,если хотите чтобы компьютер угадал ваше число введите 2\n");
    scanf_s("%i", &Mod);
    if (Mod == 1)
    {
        int numb = 1 + rand() % (1000 - 1 + 1);
        printf("Угадайте случайное число от 1 до 1000\n");
        printf("%i",numb);
        int count=0;
        while (1)
        {
            printf("Введите догадку\n");
            scanf_s("%i", &answer);
            if (answer > numb) { printf("Введённое число больше загаданного\n");count++; }
            else if (answer < numb) { printf("Введённое число меньшне загаданного\n");count++; }
            else if (answer == numb) { printf("Вы угадали число!\n"); printf("Количество попыток\n"); printf("%i",count);break; }
        }
    }
    else
    {
        int numb;
        while (1)
        {

            printf("Введите число от 1 до 1000\n");
            scanf_s("%i", &numb);
            if ((numb < 1001) && (numb > 0)) { break; }
        }
        int rightedge, leftedge;
        rightedge = 1000;
        leftedge = 1;
        int count=0;
        while (1)
        {
            int answer = leftedge + rand() % (rightedge - leftedge + 1);
            char s;
            printf("%i", answer);
            printf("- загаданное число меньше или больше?А может это оно и есть?(введите <,>,=\n");
            getchar();
            scanf_s("%c", &s);
            if (s == '>') { leftedge = answer;count++; }
            else if (s == '<') { rightedge = answer;count++; }
            else if (s == '=') { printf("Я так и знал!");printf("Количество попыток\n");printf("%i",count); break; }

        }

    }
    return 0;
}