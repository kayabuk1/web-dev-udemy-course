#include<stdio.h>

int main(void) {
	int num;
	printf("���̒l�ŁA���[�v���甲���܂��B\n");
	while (1) {
		//�Ȃ�while�Ɉ����n�����i�����j���P�ŉi�����[�v�ɂȂ�̂��B
		//while()�́i�j�̒��̏������^�ł������J��Ԃ��B
		//������C����̃��[���ł́A�������^�ł���ꍇ��1�A
		//�U�ł���ꍇ��0�ƒ�`����Ă���B
		//����āAwhile(1)�͏�ɐ^�ł��邽�߁A�i�����[�v�ƂȂ�B
		
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