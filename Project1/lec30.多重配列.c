#include<stdio.h>

int main(void) {
	int a[3][4];
	int m, n;
	//最初の[3]が[行]。次の[4]が[列]。

	for (m = 0; m < 3; m++) {//外側のこのループで行を制御。0～2まで計3回繰り返す
		for (n = 0; n < 4; n++)//内側のループで列を制御。外側のﾙｰﾌﾟ1回毎に0～3まで計4回繰り返す。
			a[m][n] = m + n;//値の代入部分mとnの合計がa[m][n]の位置に格納される。
		}

	for (m = 0; m < 3; m++) {
		for (n = 0; n < 4; n++) {
			printf("%d ", a[m][n]);
		}
		printf("\n");
	}
	return 0;
}