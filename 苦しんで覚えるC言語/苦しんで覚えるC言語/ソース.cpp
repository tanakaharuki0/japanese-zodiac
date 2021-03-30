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
	printf("生年月日を/で区切って入力してください。 例：2000/4/1\n");
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
		printf("申年\n");
		break;
	case 1:
		printf("酉年\n");
		break;
	case 2:
		printf("戌年\n");
		break;
	case 3:
		printf("亥年\n");
		break;
	case 4:
		printf("子年\n");
		break;
	case 5:
		printf("丑年\n");
		break;
	case 6:
		printf("寅年\n");
		break;
	case 7:
		printf("卯年\n");
		break;
	case 8:
		printf("辰年\n");
		break;
	case 9:
		printf("巳年\n");
		break;
	case 10:
		printf("午年\n");
		break;
	case 11:
		printf("未年\n");
		break;
	default:
		printf("年の入力が間違っています。\n");
		break;
	}
	return 0;
}

int seiza(int year, int month, int date) {
	int value2;
	if ((month == 3 && 21 <= date && date <= 31) || (month == 4 && 1 <= date && date <= 19)) {
		printf("牡羊座\n");
	}
	else if ((month == 4 && 20 <= date && date <= 30) || (month == 5 && 1 <= date && date <= 20)) {
		printf("牡牛座\n");
	}
	else if ((month == 5 && 21 <= date && date <= 31) || (month == 6 && 1 <= date && date <= 21)) {
		printf("双子座\n");
	}
	else if ((month == 6 && 22 <= date && date <= 30) || (month == 7 && 1 <= date && date <= 22)) {
		printf("蟹座\n");
	}
	else if ((month == 7 && 23 <= date && date <= 31) || (month == 8 && 1 <= date && date <= 22)) {
		printf("獅子座\n");
	}
	else if ((month == 8 && 23 <= date && date <= 31) || (month == 9 && 1 <= date && date <= 22)) {
		printf("乙女座\n");
	}
	else if ((month == 9 && 23 <= date && date <= 30) || (month == 10 && 1 <= date && date <= 23)) {
		printf("天秤座\n");
	}
	else if ((month == 10 && 24 <= date && date <= 31) || (month == 11 && 1 <= date && date <= 22)) {
		printf("蠍座\n");
	}
	else if ((month == 11 && 23 <= date && date <= 30) || (month == 12 && 1 <= date && date <= 21)) {
		printf("射手座\n");
	}
	else if ((month == 12 && 22 <= date && date <= 31) || (month == 1 && 1 <= date && date <= 19)) {
		printf("山羊座\n");
	}
	else if ((month == 1 && 20 <= date && date <= 31) || (month == 2 && 1 <= date && date <= 18)) {
		printf("水瓶座\n");
	}
	else if (((year % 4 != 0 && month == 2 && 19 <= date && date <= 28) || (month == 3 && 1 <= date && date <= 20)) || ((year % 4 == 0 && month == 2 && 19 <= date && date <= 29) || (month == 3 && 1 <= date && date <= 20))) {
		printf("魚座\n");
	}
	else {
		printf("入力に誤りがあります。\n");
	}
	return 0;
}