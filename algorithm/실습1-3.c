/* �Է¹��� ���� ���� ��ȣ(���/����/0)�� �Ǵ�*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	if (n > 0)
		printf("�� ���� ����Դϴ�.\n");
	else if (n < 0)
		printf("�� ���� �����Դϴ�.\n");
	else
		printf("�� ���� 0�Դϴ�.\n");
	return 0;
}
