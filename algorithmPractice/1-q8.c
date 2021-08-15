/* 가우스의 법칙 사용 1 ~ n까지의 합*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, sum=0, chk=0;
	printf("n의 값 입력 : ");
	scanf("%d", &n);
	/*if (n % 2 == 0)
		sum = (1 + n) * (n / 2);
	else
		sum = (1 + n) * (n / 2) + (n + 1) / 2;*/
	sum = (1 + n) * (n / 2) + (n % 2 == 0 ? 0 : (n + 1) / 2);

	printf("합 : %d\n", sum);

	for (int i = 1; i <= n; i++)
		chk += i;
	printf("check sum : %d", chk);
}