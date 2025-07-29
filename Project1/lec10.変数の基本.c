#include<stdio.h>

int main(void) 
{
	int a;
	int b = 3;
	int add, sub;
	double avg;
	a = 10;//変数は初期化しないと値が不定になるので、必ず初期化すること
	add = a + b;
	sub = a - b;//subはsubtractionの略
	avg = (a + b) / 2.0;//aとbは整数なので、正確な平均値を求める為にはdouble型の2.0で悪必要がある
						//int型/double型の計算結果はdouble型になる
	printf("%d+%d=%d\n", a, b, add);
	printf("%d-%d=%d\n", a, b, sub);
	printf("%dと%dの平均値:%f\n", a, b, avg);
}
/*
変数は箱。入れるデータの種類に応じて"型"と"変数名"を宣言する。 
 */