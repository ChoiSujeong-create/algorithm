#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, a,b;
	printf("a �� : ");
	scanf("%d", &a);
	do {
		printf("b �� : ");
		scanf("%d", &b);
	} while (a > b); 
	printf("b - a = %d \n", b - a);
	return 0;
}