#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int year;
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("1");
	}
	else {
		printf("0");
	}
}

/* 연도를 입력 하였을때 윤년이라면 1 윤년이 아니라면 0을 출력하게하시오
(윤년 : 4의 배수이면서 100의 배수가 아닐때, 또는 400의 배수일 때다)*/