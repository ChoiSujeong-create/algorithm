/* �� ���� �ִ��� ���ϴ� �Լ� max4 �ۼ� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}
int main(void)
{
	printf("max(%d, %d, %d, %d) = %d \n", 2, 5, 7, 8, max4(2, 5, 7, 8));
}
