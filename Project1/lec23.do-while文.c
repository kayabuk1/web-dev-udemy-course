#include<stdio.h>
#include<string.h>

int main(void) {
	int i = 0;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 5);
	printf("\n");

	char response[10];
	do {
		printf("���s���܂����H (�͂�/������): ");
		scanf("%s", response);
	} while (strcmp(response, "�͂�") == 0);
	printf("�I�����܂��B\n");
	return 0;
	/*��̗l�ȗ�Ȃ班�Ȃ��Ƃ���x���s����K�v������̂�do-while���g���̂����R�Ƃ̂���*/
}