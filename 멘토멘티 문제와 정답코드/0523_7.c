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
/*  switch���� �̿��Ͽ� �Է��� ���� 1�ϰ�쿡�� 3�� ������,2�� ��쿡��
3�� ��������, 3�� ��쿡�� 3�� 4������ ����ϰ� �Ͻÿ�*/