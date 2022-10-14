#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	setlocale(0, "");
	srand(time(NULL));

	printf("	����� 1. ��������� ����������� ��������� ����� �� ��������� �� 1 �� 1000."
		"������������ ������ ������� �������, �� ������� ��������� ��������: ����������� ����� ������, ����������� ����� ������, ��������."
		"������ �����������, ����� ������������ ������� �����.\n");
	printf("	����� 2. ������������ ���������� ����� �� ��������� �� 1 �� 1000 � ������ ���."
		"��������� �������� ��������� �����, ������ �� ����� �������, �� ������� ������������ ������ >, < ��� =."
		"������ �����������, ����� ��������� ������� �����.\n");
	printf("�������� ����� ������ ��������� (������� ����� 1 ��� 2): ");

	int a, k = 0, ans_u = -1, ans_p = -1; // ans_u - ����� ������������, k - ���-�� �������, ans_p - ����� ���������
	int b = 1 + rand() % 1000; // b - ���������� ����� ����������

	//�������� ������������ �������� ������:
	do {
		scanf_s("%i", &a);
		if ((a < 1) or (a > 2)) {
			printf("��������� �������: ");
		}
	} while (!((a == 1) or (a == 2)));

	switch (a) {

	case 1:
		printf("��������� ��������� �����. ���������� ��� ��������: ");

		while (ans_u != b) {
			k += 1;
			scanf_s("%i", &ans_u);
			if (ans_u < b) {
				printf("���������� ����� ������.\n");
			}
			else if (ans_u > b) {
				printf("���������� ����� ������.\n");
			}
		}

		printf("�� ������� �����! ���������� �������: %i \n", k);
		break;

	case 2:
		printf("��������� ����� �� 0 �� 1000: ");
		int M = 1, N = 1000; // �������� [M, N]
		char ans_u2 = ' ';

		//�������� ������������ �������� ������:
		do {
			scanf_s("%i", &ans_u);
			if (!((0 <= ans_u) and (ans_u <= 1000))) {
				printf("��������� �������: ");
			}
		} while (!((0 <= ans_u) and (ans_u <= 1000)));

		do {
			k += 1;
			ans_p = M + rand() % (N - M + 1);
			printf("��� ����� %i ?\n", ans_p);
			getchar();
			scanf_s("%c", &ans_u2);
			if (ans_u2 == '>') /* ���������� ������������� ����� ������, ��� � ��������� */ {
				M = ans_p;
			}
			else if (ans_u2 == '<') /* ���������� ������������� ����� ������, ��� � ��������� */ {
				N = ans_p;
			}
		} while (ans_u2 != '=');

		printf("��������� ������� �����! ���������� �������: %i \n", k);
		break;
	}

	return 0;
}