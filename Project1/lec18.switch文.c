#include<stdio.h>

int main(void) {
	int num;
	printf("1～3の値を入力してください：");
	scanf(" %d", &num);
	//フォーマット指定文字列（書式指定文字列）は文字列扱いなので””で囲む必要がある。
	switch (num) {
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	default:
		//defaultという単語には、「規定の」「標準の」「既定の」
		// 「他に選択肢がない場合の」といった意味合いがある。
		// 「else」にはそうでないなら～、という条件の否定を表す。
		printf("不適切な値です。\n");
		break;
	}
}