#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int array[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", array[i]);
	}

}
/* �迭 array[10] �� �������� ���� 1~10�� �ݺ����� �̿��Ͽ�
���� ���� �־��ص� ����Ͻÿ�*/