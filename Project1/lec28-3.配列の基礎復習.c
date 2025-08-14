#include<stdio.h>
#include<stddef.h>
#define array_size 6
/*なぜマクロでの置換では＝や書式指定子を使わないのか？
プリプロセッサでコンパイル前に行われるマクロは「＝」を使う代入よりもコンピュータにとって簡単な処理とのこと。
コンピュータはarray_sizeと言う文字列をひたすらに検索して、見つけたら「6」に置き換えると言う作業をする。。
#defineはコンパイルが終わると消えてしまうので、実行時にはarray_sizeは存在しない。
それに対して代入は、宣言された変数に対してメモリを確保して、プログラムの一連の処理中も変数が使われる場合に備えて変数の為のメモリを
確保して置く必要があるとのこと。その為代入の方がより処理のオーバヘッドが大きいとのこと*/


int main(void) {
	int n[] = { 5,4,3,2,1,0 };
	int i;

	for (i = 0; i < 7; i++) {
		printf("n[%d]=%d,", i, n[i]);
	}
	printf("\n");

	int m[array_size] = { 5,4,3,2,1,0 };
	size_t j;
	for (j = 0; j < array_size; j++) {
		printf("m[%zu]=%d,", j, m[j]);
	}
	printf("\n");

	int o[] = { 5,4,3,2,1,0 };
	int k;
	size_t array_size2 = sizeof(o) / sizeof(o[0]);
	for (k = 0; k < array_size2; k++) {
		printf("o[%d]=%d,", k, o[k]);
	}
	printf("\n");
	return 0;

	/*実行結果↓
n[0]=5,n[1]=4,n[2]=3,n[3]=2,n[4]=1,n[5]=0,n[6]=-858993460,
m[0]=5,m[1]=4,m[2]=3,m[3]=2,m[4]=1,m[5]=0,
o[0]=5,o[1]=4,o[2]=3,o[3]=2,o[4]=1,o[5]=0,
	*/
}