#include<stdio.h>

int main(void) {

	int i, num;
	char c;

	//0を入力すると結果が変わる
	//whileループで実行
	do {
		printf("回数を入力\n：");
		
		if (scanf("%d", &num) == 1) {
			printf("whileで実行\n");
			i = 1;
			while (i <= num) {//i<=0だと1回も実行されない。
				printf("*");
				i++;
			}
			printf("\n");
			break; // 入力が正しい場合はループを抜ける
		}
		else {
			printf("無効な入力です。もう一度入力してください。\n");
			while (getchar() != '\n');
		}
	} while (1);
	
	//do~whileループで実行
	printf("do~whileで実行\n");
	i = 1;
	do {
		printf("*");
		i += 1;
	} while (i <= num);
	printf("\n");

	return 0;
}