/* 입력받은 정수 값의 부호(양수/음수/0)를 판단*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	if (n == 1)
		printf("이 수는 1입니다.\n");
	else if (n == 2)
		printf("이 수는 2입니다.\n");
	else if (n == 3)
		printf("이 수는 3입니다.\n");
	return 0;
}