#include<stdio.h>
#include<string.h>

int main(void) {
	int i = 0;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 5);
	printf("\n");

	char response[10];
	do {
		printf("続行しますか？ (はい/いいえ): ");
		scanf("%s", response);
	} while (strcmp(response, "はい") == 0);
	printf("終了します。\n");
	return 0;
	/*上の様な例なら少なくとも一度実行する必要があるのでdo-whileを使うのが自然とのこと*/
}