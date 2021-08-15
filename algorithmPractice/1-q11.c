#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int cnt = 0;
	
	do {
		printf("n : ");
		scanf("%d", &n);
	} while (n <= 0);
	while (n>0) {
		n /=10;
		cnt++;
	}
	printf("그 수는 %d자리 수입니다.", cnt);
}