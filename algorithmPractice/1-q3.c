/* 네 값의 최솟값을 구하는 함수 max4 작성 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min4(int a, int b, int c, int d) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	return min;
}
int main(void)
{
	printf("min(%d, %d, %d, %d) = %d \n", 2, 5, 7, 8, min4(2, 5, 7, 8));
}
