/* b - a의 값을 구합니다. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int sum;
	puts("1부터 n까지의 합을 구합니다.");
	do {
		printf("n 값 : ");
		scanf("%d", &n);
	} while (n <= 0); /*n이 0보다 클 때까지 반복합니다. */
	sum = 0;
	for (i = 1; i <= n; i++)
		sum += i;
	printf("1부터 %d까지의 합은 %d 입니다.\n", n, sum);
	return 0;
}

//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//
//	printf("a 값 : ");
//	scanf("%d", &a);
//
//	while (1) {
//		printf("b 값 : ");
//		scanf("%d", &b);
//		if (b > a) break;
//		printf("a보다 큰 값을 입력하세요!\n");
//	}
//
//	printf("b - a는 %d입니다.\n", b - a);
//
//	return 0;
//}