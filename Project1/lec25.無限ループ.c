#include<stdio.h>

int main(void) {
	int num;
	printf("���̒l�ŁA���[�v���甲���܂��B\n");
	while (1) {
		printf("���l����́F");
		if (scanf("%d", &num) == 1) {
			if (num < 0) {
				break;
			}
		}
		else {
			printf("�����ȓ��͂ł��B������x���͂��Ă��������B\n");
			while (getchar() != '\n');
		}
	}
	printf("�I��\n");
	return 0;
	//C99 �ȍ~ main �֐��̍Ō�� return �����Ȃ��ꍇ�A
	//�����I�� return 0; ������邱�Ƃ��W���Œ�߂�ꂽ�̂Ŗ����Ă��ǂ����A
	//�����I�� return 0; �Ə������Ƃ���������Ă���Ƃ̂��ƁB
}