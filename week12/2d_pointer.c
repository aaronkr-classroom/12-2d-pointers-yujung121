// 2d_pointer.c
#include <stdio.h>

int main(void) {
	short data = 3,
		* p = &data, // data ������ �ּ� ���� 1���� ������ p�� ������
		** pp = &p; // 1���� ������ p������ �ּ� ���� 2���� ������ pp�� ������

	printf("[Before ] data: %d\n", data); // 3�� ���
	*p = 40; // 1���� �����Ϳ� p�� ����Ͽ� data ���� ���� 40���� ������
	printf("[Use *p] data: %d\n", data); // 40�� ���
	**pp = 500; // 2���� ������ pp�� ����Ͽ� data ���� ���� 500���� ����
	printf("[Use **pp] data: %d\n", data); // 500�� ���

	return 0;
}