#include<stdio.h>
//なぜ＃必要なのか
//コンパイラがソースコードを機械語に翻訳する前に、
//プリプロセッサが準備作業を行う。＃はプリプロセッサへの命令であることを
//表す重要な記号。
//＜＞で指定されたファイルを＃includeがあるところに丸ごと挿入しなさいという指令
//になっている。＃が無いと通常の文として解釈しようとして文法エラーになる。

int main(void){
	int num;
	printf("1～3の値を入力してください：");
	scanf("%d", &num);

	if (num == 1) {
		printf("one\n");
	}
	else if (num == 2) {
		printf("two\n");
	}
	else if (num == 3) {
		printf("three\n");
	}
	else if (num == 4) {
		printf("four\n");
	}
	else {
		printf("不適切な値です。\n");
	}
}
