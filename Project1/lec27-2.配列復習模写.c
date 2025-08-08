#include<stdio.h>

int main(void) {

	double d[4];

	double sum, avg;
	int i;

	d[0] = 1.2;
	d[1] = 3.7;
	d[2] = 4.1;
	d[3] = 2.0;

	sum = 0.0;
	for (i = 0; i < 4; i++) {
		printf("%f ", d[i]);
		//なぜ変数宣言でdouble型として宣言したのに、書式指定子では%fなのか？
		//printfの様な可変長引数関数（表示する内容によって引数の数が変わる関数）は、
		//c言語の仕様にとして、floot型の引数を渡す時、自動的にdouble型に昇格されるルールが
		//ある為。このルールを「デフォルトの実引数の昇格」と言うとのこと。
		//その為、printf関数は内部的にはfloot型を受け取る事無くdouble型として処理している。
		//なので、flootとdoubleの両方で%fを使うことが出来る。

		sum += d[i];
	}
	printf("\n");
	avg = sum / 4.0;
	printf("合計値：%f\n", sum);
	printf("平均値：%f\n", avg);
	return 0;
}