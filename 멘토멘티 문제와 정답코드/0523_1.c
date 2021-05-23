#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a, b, c, d, e, f;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	f = a + b + c + d + e;

	printf("%d", f);
}
//정수 5개를 입력하여 모든 수의 총합을 출력하시오