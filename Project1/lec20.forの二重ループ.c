#include<stdio.h>

int main(void) {
	int i, j;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			printf("%d+%d=%d ", i, j, i + j);
		}
		printf("\n");
	}
}
/*◆printfになぜｆが付くのか
ｆはformatted（書式化された）の頭文字
なのでprintfはフォーマット（書式）を指定して出力(print)するための関数ということ。
scanfも同じ理由でfがついている。
ちなみにPythonではprint関数でｆがつかない。それはprintが与えられたもの全部、いい感じに
出力してね！というより高機能かつ柔軟な命令と設計されているためらしい。」
C言語のprintfは書式指定子を使う分、余計な処理が少なく高速とのこと*/