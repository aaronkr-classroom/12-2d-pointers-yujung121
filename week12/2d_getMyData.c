// 2d_getMyData.c
#include <stdio.h>
#include <malloc.h>

// ������ ���� q�� p������ �ּ� ���� ������
void GetMyData(int** q) { 
	// �Ҵ�� �޸��� �ּ� ���� ������ q�� ����Ű�� main �Լ��� p�� ������
	*q = (int*)malloc(8);

}

int main(void) {
	int* p; // p�� �ʱ�ȭ���� �ʾƼ� ������ ���� ������
	GetMyData(&p); // ������ ���� p�� �ּ� ���� ������
	*p = 5; // �Ҵ�� �޸��� ù 4����Ʈ�� �� 5�� ����

	printf("p (�ּ�): %p\n", p);
	printf("*p (��): %d\n", *p);

	free(p); // �Ҵ�� ���� �޸𸮸� ������

	return 0;
}