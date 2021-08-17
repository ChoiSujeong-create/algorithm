#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
int main(void)
{
	int n;
	printf("please enter a number : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			printf("*");
	putchar('\n');}
	return 0;
}