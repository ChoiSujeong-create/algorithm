/* ���콺�� ��Ģ ��� 1 ~ n������ ��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, sum=0, chk=0;
	printf("n�� �� �Է� : ");
	scanf("%d", &n);
	/*if (n % 2 == 0)
		sum = (1 + n) * (n / 2);
	else
		sum = (1 + n) * (n / 2) + (n + 1) / 2;*/
	sum = (1 + n) * (n / 2) + (n % 2 == 0 ? 0 : (n + 1) / 2);

	printf("�� : %d\n", sum);

	for (int i = 1; i <= n; i++)
		chk += i;
	printf("check sum : %d", chk);
}