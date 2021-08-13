/*n이 7이면 '1 + 2 + 3 + 4 + 5 + 6 + 7 = 28'을 출력하는 프로그램 작성*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 0;
	int sum = 0;
	printf("n의 값 : ");
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