#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
 
int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int a = 0, r = 0, ans1 = 0, number1 = 0, k1 = 0, ans2 = 0, number2 = 0, k2 = 0;
    int min = 0, max = 1001;
    char sign = 0;
 
    printf("Доброго времени суток! Выберите режим: 1 или 2: ");
    scanf_s("%d", &r);
 
    switch (r) {

    case 1:

        ans1 = 1 + rand() % (1000 - 1 + 1);

        while (number1 != ans1) {
            printf("Введите число: ");
            scanf_s("%d", &number1);
            if (number1 < ans1) {
                printf("Загаданное число больше\n");
                k1 += 1;
            }
            else if (number1 > ans1) {
                printf("Загаданное число меньше\n");
                k1 += 1;
            }
            else {
                printf("Вы угадали! Количество попыток = %d\n", k1);
            }
        } 
        break;
    case 2:
 
        do {
            printf("Загадайте число от 1 до 1000: ");
            scanf_s("%d", &ans2);
            if (ans2 < 1 || ans2 > 1000) {
                printf("Введено неправильное число, попробуйте снова.\n");
            }
        } while (ans2 < 1 || ans2 > 1000);
 
        while (true) {
            k2 += 1;
            number2 = min + rand() % (max - min + 1);
            printf("Это число %d?. Введите '>' '<' или '=': ", number2);
            getchar();
            scanf_s("%c", &sign);
            if (sign == '<') {
                max = number2;
            }
            else if (sign == '>') {
                min = number2;
            }
            else if (sign == '=') {
                printf("Поздравляем! Вы угадали. Количество попыток =%d", k2);
                break;
            }
        } 
        break;
    default:
        printf("Такого режима нет.");
    }
    return 0;
}