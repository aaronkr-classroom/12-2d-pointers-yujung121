// arr_mem.c
#include <stdio.h>

#define MAX_COUNT 5 // �ִ� �Է��� 5ȸ�� ������

int main(void) {
	int num[MAX_COUNT],
		count = 0,
		sum = 0,
		i;

	// �ִ� 5ȸ���� �Է� �ް� �߰��� 9999������ ����
	while (count < MAX_COUNT) {
		printf("���ڸ� �Է��ϼ��� (9999�� ������ ����): ");
		// scanf_s("%d", &num[count]); �� ���� ǥ�� 
		scanf_s("%d", num + count); // *p + 1�� �����

		if (num[count] == 9999) break;

		count++; // �Է��� Ƚ���� �����
	}

	// �Էµ� Ƚ����ŭ ���ڸ� �����
	for (i = 0; i < count; i++) {
		if (i > 0) printf(" + ");
		printf("%d", num[i]);
		sum = sum + num[i];
	}
	printf(" = %d\n", sum);

	return 0;
}