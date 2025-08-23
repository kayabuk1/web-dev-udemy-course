#include<stdio.h>
#include<stddef.h>
#define array_size 6

int main(
	void){
	int n[] = { 5,4,3,2,1,0 };
	int i;
	for (i = 0; i<7; i++) {
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
}
