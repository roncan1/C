#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int user;
	scanf("%d", &user);

	if (user == 1)
	{
		printf("비겼습니다.");
	}

	if (user == 2)
	{
		printf("이겼습니다.");
	}

	if (user == 3)
	{
		printf("졌습니다.");
	}

}
/*4. 1을 입력하면 "가위", 2를 입력하면 "바위", 3을 입력하면 "보" 이며
computer 은 가위이다 정수 1~3을 입력하면 가위바위보 결과를 출력하게 하시오*/