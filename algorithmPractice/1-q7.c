/*n�� 7�̸� '1 + 2 + 3 + 4 + 5 + 6 + 7 = 28'�� ����ϴ� ���α׷� �ۼ�*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 0;
	int sum = 0;
	printf("n�� �� : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{	
		if (i == n)
			printf("%d = ", i);
		else if (i <n)
			printf("%d + ", i);
		sum += i;
	}
	printf("%d", sum);
	return 0;
}