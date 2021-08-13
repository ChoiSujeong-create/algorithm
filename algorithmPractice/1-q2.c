/* 세 값의 최솟값을 구하는 min3 함수 작성 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}
int main(void)
{
	int a, b, c;
	printf("정수 3개를 입력하시오.");
	scanf("%d %d %d", &a, &b, &c);
	printf("최솟값 : %d", min3(a, b, c));
}