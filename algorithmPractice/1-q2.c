/* �� ���� �ּڰ��� ���ϴ� min3 �Լ� �ۼ� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}
int main(void)
{
	int a, b, c;
	printf("���� 3���� �Է��Ͻÿ�.");
	scanf("%d %d %d", &a, &b, &c);
	printf("�ּڰ� : %d", min3(a, b, c));
}