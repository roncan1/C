#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int student_name[6] = {1,2,3,4,5,6};
	int a = 0;
		while (a < 6) {
			student_name[a] = a + 1;
			a++;
		}
}

/* ������ �Է� �Ͽ����� �����̶�� 1 ������ �ƴ϶�� 0�� ����ϰ��Ͻÿ�
(���� : 4�� ����̸鼭 100�� ����� �ƴҶ�, �Ǵ� 400�� ����� ����)*/