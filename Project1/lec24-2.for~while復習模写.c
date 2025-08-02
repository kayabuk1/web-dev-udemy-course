#include<stdio.h>

int main(void) {

	int i, num;
	char c;

	//ループA
	do {
		printf("回数を入力\n:");

		if (scanf("%d", &num) == 1) {
			printf("whileで実行\n");
			i = 1;
			//ループB
			while (i <= num) {
				printf("*");
				i += 1;
			}
			printf("\n");
			break;//ループAを抜ける為のbreak
		}
		else {
			printf("無効な入力です。もう一度入力してください。\n");
			while (getchar() != '\n');
			//char c = getchar(); の様に変数に代入すれば、読み込んだ文字を使うこともできるが、
			// 変数に代入しない場合は、読み込んだ文字はそのまま消えてしまう。
			//キーボードで入力された文字はすぐに処理されずに先ずバッファに送られる。
			//入力バッファとは入力データを一時的に保存する領域のこと。
			//入力に失敗した場合は、まだ入力バッファに残っている文字を読み込んでしまうので、
			//変数に代入しないgetchar()を使ってバッファをクリアする必要があった。
		}
		
	} while (1);

	printf("do~whileで実行\n");
	i = 1;
	//ループC
	do {
		printf("*");
		++i;
	} while (i <= num);//{}の終端がひとまとまりの処理を示すが、
	//do~whileでは構造上()で終わる為、文の終わりを示す；セミコロンが必要。
	printf("\n");

	return 0;
}