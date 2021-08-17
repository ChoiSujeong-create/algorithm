#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
int main(void)
{
	int h, w;
	printf("Outputs a rectangle.\n");
	do {
	printf("heigt : ");
	scanf("%d", &h);
	printf("width :");
	scanf("%d", &w);
	} while (h <= 0 || w <= 0);

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
			printf("*");
		putchar('\n');
	}
	return 0;
}