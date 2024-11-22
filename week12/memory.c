// memory.c

#include <stdio.h>

// ���� ����
int* BP, * SP; // Base Pointer, Stack Pointer �ùķ��̼�
int stack[1024]; // (int) 4 bit * 1024 (���� �迭)
int stackIndex = 0; // ���� ������ �ùķ��̼�

void Show() {
	printf("--------------------------------------------\n");
	printf("���� ���� ���� (Top -> Bottom):\n");
	for (int i = stackIndex - 1; i >= 0; i--) {
		// �ּҰ��� �ش� �ּҿ����� ���� ���� ���
		int* addr = (int*)stack[i];
		int actualValue = *addr;
		printf("����[%d]: %p (�ּҰ�), %d (������)\n", i, (void*)addr, actualValue);
	}
	printf("Base Pointer (BP): %p\n", (void*)BP);
	printf("Stack Pointer (SP): %p\n", (void*)SP);
	printf("--------------------------------------------\n");
}

// ���� Ǫ�� �Լ�
void push(int value) {
	stack[stackIndex++] = value;
	SP = &stack[stackIndex]; // ���� ���� �����͸� �̵�
}

// ���� �� �Լ�
void pop() {
	if (stackIndex > 0) {
		SP = &stack[--stackIndex];
		return stack[stackIndex];
	}
	return -1; // ���ÿ��� ���� ����
}

void Test(int a, int b, int c) {
	// ���� ����
	int x = a + b;
	int y = b + c;
	int z = c + a;

	printf("Test() �Լ� ���� - ���� ������ ����\n");
	// push((int)BP); // ���� BP�� ����
	BP = &stack[stackIndex - 3]; // ���� BP�� ����

	// ���� ���� ������ Ǫ�� (����)
	push((int)&x); // 0x067869540478
	push((int)&y);
	push((int)&z);

	Show();

	printf("Test() �Լ� ��ȯ - ���� ������ ����\n");
	// ���� ������ ���� (����)
	pop(); pop(); pop();
	BP = &stack[stackIndex + 3]; // ���� BP ����

	Show();
}

int main(void) {
	// ���� �Լ��� ���� ����
	int a = 10,
		b = 20,
		c = 03;
	printf("Main() �Լ� ���� - �ʱ� ���� ����\n");
	// �ʱ� ���� Ǫ�� (����)
	push((int)&a);
	push((int)&b);
	push((int)&c);

	BP = &stack[0];
	Show();

	printf("Test() �Լ� ȣ��\n");
	Test(a, b, c);

	printf("Main() �Լ� ���� - ���� ���� ����\n");
	pop(); pop(); pop();
	Show();

	return 0;
}