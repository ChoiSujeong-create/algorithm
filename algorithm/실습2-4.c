#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;
	int* a; /*배열의 첫 번째 요소의 포인터 */
	int na; /*int의 요소 갯수*/
	printf("요소 갯수 : ");
	scanf("%d", &na);
	a = calloc(na, sizeof(int)); /* 요소 갯수가 na인 int형 배열을 생성 */

	if (a == NULL)
		puts("메모리 확보에 실패했습니다.");
	else {
		printf("%d개의 정수를 입력하세요.\n", na);
		for (int i = 0; i < na; i++) {
			printf("a[%d] : ", i);
			scanf("%d", &a[i]);
		}
		printf("각 요솟값은 아래와 같습니다.\n");
		for (i = 0; i < na; i++)
			printf("a[%d] : %d\n", i, a[i]);
		free(a); /*요소 개수가 na인 int형 배열을 해제*/
		//배열의 사용이 끝나면 free함수로 메모리를 해제합니다. 
	}
}