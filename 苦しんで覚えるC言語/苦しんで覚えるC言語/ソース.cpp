#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int junishi(int);
int seiza(int, int, int);

int main(void) {
	char str[256];
	char* p;
	int num[256];
	printf("���N������/�ŋ�؂��ē��͂��Ă��������B ��F2000/4/1\n");
	scanf("%s", &str);
	p = strtok(str, "/");
	num[0] = atoi(p);
	p = strtok(NULL, "/");
	num[1] = atoi(p);
	p = strtok(NULL, "/");
	num[2] = atoi(p);
	junishi(num[0]);
	seiza(num[0], num[1], num[2]);
	return 0;
}

int junishi(int year) {
	int value1 = year % 12;
	switch (value1) {
	case 0:
		printf("�\�N\n");
		break;
	case 1:
		printf("�єN\n");
		break;
	case 2:
		printf("���N\n");
		break;
	case 3:
		printf("��N\n");
		break;
	case 4:
		printf("�q�N\n");
		break;
	case 5:
		printf("�N�N\n");
		break;
	case 6:
		printf("�ДN\n");
		break;
	case 7:
		printf("�K�N\n");
		break;
	case 8:
		printf("�C�N\n");
		break;
	case 9:
		printf("���N\n");
		break;
	case 10:
		printf("�ߔN\n");
		break;
	case 11:
		printf("���N\n");
		break;
	default:
		printf("�N�̓��͂��Ԉ���Ă��܂��B\n");
		break;
	}
	return 0;
}

int seiza(int year, int month, int date) {
	int value2;
	if ((month == 3 && 21 <= date && date <= 31) || (month == 4 && 1 <= date && date <= 19)) {
		printf("���r��\n");
	}
	else if ((month == 4 && 20 <= date && date <= 30) || (month == 5 && 1 <= date && date <= 20)) {
		printf("������\n");
	}
	else if ((month == 5 && 21 <= date && date <= 31) || (month == 6 && 1 <= date && date <= 21)) {
		printf("�o�q��\n");
	}
	else if ((month == 6 && 22 <= date && date <= 30) || (month == 7 && 1 <= date && date <= 22)) {
		printf("�I��\n");
	}
	else if ((month == 7 && 23 <= date && date <= 31) || (month == 8 && 1 <= date && date <= 22)) {
		printf("���q��\n");
	}
	else if ((month == 8 && 23 <= date && date <= 31) || (month == 9 && 1 <= date && date <= 22)) {
		printf("������\n");
	}
	else if ((month == 9 && 23 <= date && date <= 30) || (month == 10 && 1 <= date && date <= 23)) {
		printf("�V����\n");
	}
	else if ((month == 10 && 24 <= date && date <= 31) || (month == 11 && 1 <= date && date <= 22)) {
		printf("嶍�\n");
	}
	else if ((month == 11 && 23 <= date && date <= 30) || (month == 12 && 1 <= date && date <= 21)) {
		printf("�ˎ��\n");
	}
	else if ((month == 12 && 22 <= date && date <= 31) || (month == 1 && 1 <= date && date <= 19)) {
		printf("�R�r��\n");
	}
	else if ((month == 1 && 20 <= date && date <= 31) || (month == 2 && 1 <= date && date <= 18)) {
		printf("���r��\n");
	}
	else if (((year % 4 != 0 && month == 2 && 19 <= date && date <= 28) || (month == 3 && 1 <= date && date <= 20)) || ((year % 4 == 0 && month == 2 && 19 <= date && date <= 29) || (month == 3 && 1 <= date && date <= 20))) {
		printf("����\n");
	}
	else {
		printf("���͂Ɍ�肪����܂��B\n");
	}
	return 0;
}