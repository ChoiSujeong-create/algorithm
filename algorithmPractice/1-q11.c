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
	printf("�� ���� %d�ڸ� ���Դϴ�.", cnt);
}