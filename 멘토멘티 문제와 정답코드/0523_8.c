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
/*  ���� n�� �Է��Ͽ����� 1���� n���� ��� ���ϴ�
�޼ҵ�(�Լ�)�� ���� ���Ѱ��� ����Ͻÿ�*/