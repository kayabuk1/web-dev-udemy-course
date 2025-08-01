#include<stdio.h>

int main(void) {
	int i1, i2, j1, j2;
	double d1, d2, e1, e2;

	j1 = 3;
	j2 = 3;

	d1 = 1.23;
	d2 = 1.23;
	//double型からint型への変換
	i1 = d1;// �@普通に代入
	i2 = (int)d2;//�Aキャストして代入
	//計算するときはデータ型を同じもの同士で行わないと警告が出ることがある。
	j1 = d1;// �Bdouble型からint型への代入は、自動的に変換されて桁落ちが発生することがある。
	j2 = (int)d2;//�Cキャストして代入

	e1 = j1;// �Dint型からdouble型への代入も自動的に変換されて実行される。が、キャストする習慣を付けた方が良い
	e2 = (double)j2;//�Eキャストして代入

	printf("d1=%f d2=%f\n", d1, d2);//1.230000,1.230000
	printf("i1=%d i2=%d\n", i1, i2);//1,1
	printf("j1=%d j2=%d\n", j1, j2);//1,1
	printf("e1=%f e2=%f\n", e1, e2);//1.000000,1.000000
	return 0;
}