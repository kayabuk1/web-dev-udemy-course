#include<stdio.h>

int main(void) {
	int num;
	printf("負の値で、ループから抜けます。\n");
	while (1) {
		//なぜwhileに引き渡す数（条件）が１で永続ループになるのか。
		//while()は（）の中の条件が真である限り繰り返す。
		//そしてC言語のルールでは、条件が真である場合は1、
		//偽である場合は0と定義されている。
		//よって、while(1)は常に真であるため、永続ループとなる。
		
		printf("数値を入力：");
		if (scanf("%d", &num) == 1) {
			if (num < 0) {
				break;
			}
		}
		else {
			printf("無効な入力です。もう一度入力してください。\n");
			while (getchar() != '\n');
		}
	}
	printf("終了\n");
	return 0;
	//C99 以降 main 関数の最後に return 文がない場合、
	//自動的に return 0; が補われることが標準で定められたので無くても良いが、
	//明示的に return 0; と書くことが推奨されているとのこと。
}