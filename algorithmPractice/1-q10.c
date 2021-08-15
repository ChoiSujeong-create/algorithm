#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, a,b;
	printf("a °ª : ");
	scanf("%d", &a);
	do {
		printf("b °ª : ");
		scanf("%d", &b);
	} while (a > b); 
	printf("b - a = %d \n", b - a);
	return 0;
}