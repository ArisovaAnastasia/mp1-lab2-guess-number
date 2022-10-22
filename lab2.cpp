#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
    setlocale(LC_ALL, "rus");
    int k1 = 0, r = 0, zag = 0, polz = 0, d = 1 + rand() % (1000);
    printf("Привет! Выбери режим игры (1 или 2):");
    scanf_s("%i", &r);
    switch (r) {
    case 1:
        zag = 1 + rand() % (1000);
        while (zag != polz) {
            printf("Напиши число:");
            scanf_s("%i", &polz);

            if (polz < zag) {
                printf("загаданное число больше!");
                k1 += 1;
            }
            else if (polz > zag) {
                printf("загаданное число меньше!");
                k1 += 1;
            }
            else {
                printf("угадали!");
                k1 += 1;
                printf("%i", k1);
                break;
            }
        }

    case 2:
        int ans2 = 0, number2 = 0, k2 = 0, m = 0;
        int l = 0, r = 1001;
        char sign = 0;
        do {
            printf("Загадайте число от 1 до 1000: ");
            scanf_s("%d", &ans2);
            if (ans2 < 1 || ans2 > 1000) {
                printf("Введено неправильное число, попробуйте снова.\n");
            }
        } while (ans2 < 1 || ans2 > 1000);

        while (true) {
            k2 += 1;
            number2 = (r + l) / 2;
            printf("Это число %d?. Введите '>' '<' или '=': ", number2);
            getchar();
            scanf_s("%c", &sign);
            if (sign == '<') {
                r = number2 - 1;
            }
            else if (sign == '>') {
                l = number2 + 1;
            }
            else if (sign == '=') {
                printf("Поздравляем! Вы угадали. Количество попыток: %d", k2);
                break;
            }
        }
    }
}