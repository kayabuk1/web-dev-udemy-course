#include<stdio.h>

int main(void) {

	int dice;
	printf("1�`6�̐��l����͂��Ă��������F");
	scanf("%d", &dice);

	if (1 <= dice && dice <= 6) {
		if (dice == 2 || dice == 4 || dice == 6) {
			printf("���i�`���E�j�ł��B\n");
		}
		else {
			printf("���i�n���j�ł��B\n");
		}
	}
	else {
		printf("�͈͊O�̐��l�ł��B\n");
	}
}
