#include<stdio.h>

int main(void) {
	int num;
	printf("1�`3�̒l����͂��Ă��������F");
	scanf(" %d", &num);
	//�t�H�[�}�b�g�w�蕶����i�����w�蕶����j�͕����񈵂��Ȃ̂Łh�h�ň͂ޕK�v������B
	switch (num) {
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	default:
		//default�Ƃ����P��ɂ́A�u�K��́v�u�W���́v�u����́v
		// �u���ɑI�������Ȃ��ꍇ�́v�Ƃ������Ӗ�����������B
		// �uelse�v�ɂ͂����łȂ��Ȃ�`�A�Ƃ��������̔ے��\���B
		printf("�s�K�؂Ȓl�ł��B\n");
		break;
	}
}