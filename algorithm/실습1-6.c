/* b - a�� ���� ���մϴ�. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int sum;
	puts("1���� n������ ���� ���մϴ�.");
	do {
		printf("n �� : ");
		scanf("%d", &n);
	} while (n <= 0); /*n�� 0���� Ŭ ������ �ݺ��մϴ�. */
	sum = 0;
	for (i = 1; i <= n; i++)
		sum += i;
	printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum);
	return 0;
}

//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//
//	printf("a �� : ");
//	scanf("%d", &a);
//
//	while (1) {
//		printf("b �� : ");
//		scanf("%d", &b);
//		if (b > a) break;
//		printf("a���� ū ���� �Է��ϼ���!\n");
//	}
//
//	printf("b - a�� %d�Դϴ�.\n", b - a);
//
//	return 0;
//}