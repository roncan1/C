#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int user,
		case1 = 3 * 3,
		case2 = 3 * 3 * 3,
		case3 = 3 * 3 * 3 * 3;
	scanf("%d", &user);

	switch (user)
	{
	case 1: printf("%d", case1);
		break;

	case 2: printf("%d", case2);
		break;

	case 3: printf("%d", case3);
		break;
	}

}
/*  switch문을 이용하여 입력한 값이 1일경우에는 3의 제곱을,2일 경우에는
3의 세제곱을, 3일 경우에는 3의 4제곱을 출력하게 하시오*/