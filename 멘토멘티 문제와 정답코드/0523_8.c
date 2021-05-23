#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int n;
	scanf("%d", &n);

	getTotal(n);
}

int getTotal(int n) {
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result = result + i;
	}
	printf("%d", result);
	return NULL;
}
/*  정수 n을 입력하였을때 1부터 n까지 모두 더하는
메소드(함수)를 만들어서 더한값을 출력하시오*/