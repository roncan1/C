#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	float a, b, c, d, e, f;
	

	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	f = a + b + c + d + e;
	f = f / 5;

	printf("%f", f);
}
//2 정수 5개를 입력하여 소수로 평균을 출력하시오