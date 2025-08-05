#include<stdio.h>

int main(void) {

	int i, num;
	char c;

	do {
		printf("回数を入力\n:");

		if (scanf("%d", &num) == 1) {
			printf("whileで実行\n");
			i = 1;

			while (i <= num) {
				printf("*");
				i++;
			}
			printf("\n");
			break;
		}
		else {
			printf("無効な入力です。もう一度入力してください。\n");
			while (getchar() != '\n');
		}
	} while (1);

	printf("do~whileで実行\n");
	i = 1;

	do {
		printf("*");
		i += 1;
	} while (i <= num);
	printf("\n");
	return 0;
}