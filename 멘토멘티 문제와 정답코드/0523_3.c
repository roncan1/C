#include <stdio.h>
main() {

	for (int i = 2; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			int result = i * j;
			printf("%d * %d = %d    ", i, j, result);
		}
		printf("\n");
	}
}
//3 �ݺ����� ����Ͽ� �������� ����Ͻÿ� (2��~9��)