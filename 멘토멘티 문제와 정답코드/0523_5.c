#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			if (i >= j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
/*반복문을 사용하여
*
**
***
****
*****
을 출력하시오 */