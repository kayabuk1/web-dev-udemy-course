#include<stdio.h>
//�Ȃ����K�v�Ȃ̂�
//�R���p�C�����\�[�X�R�[�h���@�B��ɖ|�󂷂�O�ɁA
//�v���v���Z�b�T��������Ƃ��s���B���̓v���v���Z�b�T�ւ̖��߂ł��邱�Ƃ�
//�\���d�v�ȋL���B
//�����Ŏw�肳�ꂽ�t�@�C������include������Ƃ���Ɋۂ��Ƒ}�����Ȃ����Ƃ����w��
//�ɂȂ��Ă���B���������ƒʏ�̕��Ƃ��ĉ��߂��悤�Ƃ��ĕ��@�G���[�ɂȂ�B

int main(void){
	int num;
	printf("1�`3�̒l����͂��Ă��������F");
	scanf("%d", &num);

	if (num == 1) {
		printf("one\n");
	}
	else if (num == 2) {
		printf("two\n");
	}
	else if (num == 3) {
		printf("three\n");
	}
	else if (num == 4) {
		printf("four\n");
	}
	else {
		printf("�s�K�؂Ȓl�ł��B\n");
	}
}
