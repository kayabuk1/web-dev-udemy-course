#include<stdio.h>

int main(void) {

	int i, num;
	char c;

	//���[�vA
	do {
		printf("�񐔂����\n:");

		if (scanf("%d", &num) == 1) {
			printf("while�Ŏ��s\n");
			i = 1;
			//���[�vB
			while (i <= num) {
				printf("*");
				i += 1;
			}
			printf("\n");
			break;//���[�vA�𔲂���ׂ�break
		}
		else {
			printf("�����ȓ��͂ł��B������x���͂��Ă��������B\n");
			while (getchar() != '\n');
			//char c = getchar(); �̗l�ɕϐ��ɑ������΁A�ǂݍ��񂾕������g�����Ƃ��ł��邪�A
			// �ϐ��ɑ�����Ȃ��ꍇ�́A�ǂݍ��񂾕����͂��̂܂܏����Ă��܂��B
			//�L�[�{�[�h�œ��͂��ꂽ�����͂����ɏ������ꂸ�ɐ悸�o�b�t�@�ɑ�����B
			//���̓o�b�t�@�Ƃ͓��̓f�[�^���ꎞ�I�ɕۑ�����̈�̂��ƁB
			//���͂Ɏ��s�����ꍇ�́A�܂����̓o�b�t�@�Ɏc���Ă��镶����ǂݍ���ł��܂��̂ŁA
			//�ϐ��ɑ�����Ȃ�getchar()���g���ăo�b�t�@���N���A����K�v���������B
		}
		
	} while (1);

	printf("do~while�Ŏ��s\n");
	i = 1;
	//���[�vC
	do {
		printf("*");
		++i;
	} while (i <= num);//{}�̏I�[���ЂƂ܂Ƃ܂�̏������������A
	//do~while�ł͍\����()�ŏI���ׁA���̏I���������G�Z�~�R�������K�v�B
	printf("\n");

	return 0;
}