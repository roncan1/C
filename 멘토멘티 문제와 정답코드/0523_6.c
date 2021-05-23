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
/* 배열 array[10] 을 생성한후 정수 1~10을 반복문을 이용하여
각각 값을 넣어준뒤 출력하시오*/