#include<stdio.h>

int main(void) {
	int i1, i2, j1, j2;
	double d1, d2, e1, e2;

	j1 = 3;
	j2 = 3;

	d1 = 1.23;
	d2 = 1.23;
	//double�^����int�^�ւ̕ϊ�
	i1 = d1;// �@���ʂɑ��
	i2 = (int)d2;//�A�L���X�g���đ��
	//�v�Z����Ƃ��̓f�[�^�^�𓯂����̓��m�ōs��Ȃ��ƌx�����o�邱�Ƃ�����B
	j1 = d1;// �Bdouble�^����int�^�ւ̑���́A�����I�ɕϊ�����Č��������������邱�Ƃ�����B
	j2 = (int)d2;//�C�L���X�g���đ��

	e1 = j1;// �Dint�^����double�^�ւ̑���������I�ɕϊ�����Ď��s�����B���A�L���X�g����K����t���������ǂ�
	e2 = (double)j2;//�E�L���X�g���đ��

	printf("d1=%f d2=%f\n", d1, d2);//1.230000,1.230000
	printf("i1=%d i2=%d\n", i1, i2);//1,1
	printf("j1=%d j2=%d\n", j1, j2);//1,1
	printf("e1=%f e2=%f\n", e1, e2);//1.000000,1.000000
	return 0;
}