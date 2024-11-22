// 2d_ppl_arr.c
#include <stdio.h>

int main(void) {
	// ����
	int ages, member, temp, sum;
	// ���ɺ� �ο��� 20�� 4��, 30�� 2��, 40�� 3��
	unsigned char limit_table[3] = { 4, 2, 3 };
	// ���ɺ� ��������Ű�� Ƚ���� ������ �迭 
	unsigned char count[3][4];

	// ���ɺ��� ��������Ű�� Ƚ���� �Է� ����
	for (ages = 0; ages < 3; ages++) {
		// �� ������ ��������Ű�� Ƚ����� �����
		printf("\n%d0�� ������ ��������Ű�� Ƚ��\n", ages + 2 );

		// �ش� ���ɿ� �Ҽӵ� ������� ������� �Է� ����
		for (member = 0; member < limit_table[ages]; member++) {
			// #1, #2, ... ��� ���
			printf("#%d: ", member + 1);

			// ��������Ű�� Ƚ���� ������ �Է� ����
			scanf_s("%d", &temp);
			count[ages][member] = (unsigned char)temp;
		}
	}

	printf("\n\n���ɺ� ��� ��������Ű�� Ƚ��\n");

	// ���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��� ���� �����
	for (ages = 0; ages < 3; ages++) {
		sum = 0;
		// 20��: 30��: 40��: ��� ���
		printf("%d0��: ", ages + 2);

		// �ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ���
		for (member = 0; member < limit_table[ages]; member++) {
			sum = sum + count[ages][member];
		}

		// �ջ� ���� �ο����� ����� ����� ��
		printf("%5.2f\n", (double)sum / limit_table[ages]);
	}
	return 0;
}