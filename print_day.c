#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int a, b;

	scanf("%d %d",&a,&b);

	char day[4];
	int day_sum = 0;

	for (int i = 1; i < a; i++) {	//1~입력받은 월 까지 수를 더해 우러별 일 수의 합을 구함
		if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12)) {
			day_sum = day_sum + 31;
		}
		else if (i == 2) {
			day_sum = day_sum + 29;
		}
		else {
			day_sum = day_sum + 30;
		}
	}

	day_sum = ((day_sum + b)%7)-1;

	if (day_sum == 0) {
		strcpy(day,"FRI");
	}
	else if (day_sum == 1) {
		strcpy(day, "SAT");
	}
	else if (day_sum == 2) {
		strcpy(day, "SUN");
	}
	else if (day_sum == 3) {
		strcpy(day, "MON");
	}
	else if (day_sum == 4) {
		strcpy(day, "TUE");
	}
	else if (day_sum == 5) {
		strcpy(day, "WED");
	}
	else {
		strcpy(day, "THU");
	}
	printf("\n\n2016년 %d월 %d일의 요일은 %s 입니다.\n\n", a, b, day);
	return 0;
}