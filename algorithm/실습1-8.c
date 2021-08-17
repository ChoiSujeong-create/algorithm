/* 왼쪽 아래가 직각인 이등변 삼각형을 출력합니다. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j, n;
	do {
		printf("Which stage triangle is it? : ");
		scanf("%d", &n);
	} while (n <= 0);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}