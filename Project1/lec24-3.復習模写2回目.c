#include<stdio.h>

int main(void) {

	int i, num;
	char c;

	do {
		printf("�񐔂����\n:");

		if (scanf("%d", &num) == 1) {
			printf("while�Ŏ��s\n");
			i = 1;

			while (i <= num) {
				printf("*");
				i++;
			}
			printf("\n");
			break;
		}
		else {
			printf("�����ȓ��͂ł��B������x���͂��Ă��������B\n");
			while (getchar() != '\n');
		}
	} while (1);

	printf("do~while�Ŏ��s\n");
	i = 1;

	do {
		printf("*");
		i += 1;
	} while (i <= num);
	printf("\n");
	return 0;
}