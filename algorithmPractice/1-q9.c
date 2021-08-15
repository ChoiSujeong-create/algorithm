#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumof(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
		sum += i;
	return sum;
}
int main(void)
{
	printf("%d\n", sumof(1, 10));
	printf("%d\n", sumof(1, 20));
	
}