#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
//���� �Ʒ��� ������ �̵ �ﰢ���� ��� Outputs an isosceles triangle at right angles to the bottom left
void triangleB(int n) { 
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= i; j++)
				putchar('*');
		putchar('\n');
	}
		putchar('\n');
}
//���� ���� ������ �̵ �ﰢ���� ��� Outputs an isosceles triangle at right angles to the top left
void triangleLU(int n) {
	for (int i = n; i >0; i--) {
		for (int j = i; j >0; j--)
			putchar('*');
		putchar('\n');
	}
	putchar('\n');
}
//������ ���� ������ �̵ �ﰢ���� ��� print an isosceles triangle at right angles to the top right
void triangleRU(int n) {
	for (int i = n; i > 0; i--) {
		for (int k = n-i; k>0; k--)
			putchar(' ');
		for (int j = i; j > 0; j--)
			putchar('*');	
		putchar('\n');
	}
	putchar('\n');
}
//������ �Ʒ��� ������ �̵ �ﰢ���� ��� Outputs an isosceles triangle at right angles to the bottom right
void triangleRB(int n) {
	for (int i = 1; i <= n; i++) {
		for (int k = n-i; k>0; k-- )
			putchar(' ');
		for (int j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	putchar('\n');
}
int main(void)
{
	triangleB(5);
	triangleLU(5);
	triangleRU(5);
	triangleRB(5);
	return 0;
}