// name_malloc.c
#include <stdio.h>
#include <malloc.h>

int main(void) {
	char* p_name;
	p_name = (char*)malloc(20); // 20����Ʈ�� �޸𸮸� ���� �Ҵ�
	if (p_name != NULL) { // �޸� �Ҵ翡 ����!
		printf("Enter your name: ");
		gets(p_name); // �̸��� �Է� ����

		printf("Hi~~ %s\n", p_name); // �Է� ���� �̸��� ���
		free(p_name);
		// ������ ���� p_name �� ���� �Ҵ�� �޸𸮸� ����!!
	}
	else { // �޸� �Ҵ翡 ���Ф̤�
		printf("Memory allocation error!!");
	}

	return 0;
}