#include<stdio.h>

int main(void) {

	int i, num;
	char c;

	//0����͂���ƌ��ʂ��ς��
	//while���[�v�Ŏ��s
	do {
		printf("�񐔂����\n�F");
		
		if (scanf("%d", &num) == 1) {
			printf("while�Ŏ��s\n");
			i = 1;
			while (i <= num) {//i<=0����1������s����Ȃ��B
				printf("*");
				i++;
			}
			printf("\n");
			break; // ���͂��������ꍇ�̓��[�v�𔲂���
		}
		else {
			printf("�����ȓ��͂ł��B������x���͂��Ă��������B\n");
			while (getchar() != '\n');
		}
	} while (1);
	
	//do~while���[�v�Ŏ��s
	printf("do~while�Ŏ��s\n");
	i = 1;
	do {
		printf("*");
		i += 1;
	} while (i <= num);
	printf("\n");

	return 0;
}