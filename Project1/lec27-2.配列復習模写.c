#include<stdio.h>

int main(void) {

	double d[4];

	double sum, avg;
	int i;

	d[0] = 1.2;
	d[1] = 3.7;
	d[2] = 4.1;
	d[3] = 2.0;

	sum = 0.0;
	for (i = 0; i < 4; i++) {
		printf("%f ", d[i]);
		//�Ȃ��ϐ��錾��double�^�Ƃ��Đ錾�����̂ɁA�����w��q�ł�%f�Ȃ̂��H
		//printf�̗l�ȉϒ������֐��i�\��������e�ɂ���Ĉ����̐����ς��֐��j�́A
		//c����̎d�l�ɂƂ��āAfloot�^�̈�����n�����A�����I��double�^�ɏ��i����郋�[����
		//����ׁB���̃��[�����u�f�t�H���g�̎������̏��i�v�ƌ����Ƃ̂��ƁB
		//���ׁ̈Aprintf�֐��͓����I�ɂ�floot�^���󂯎�鎖����double�^�Ƃ��ď������Ă���B
		//�Ȃ̂ŁAfloot��double�̗�����%f���g�����Ƃ��o����B

		sum += d[i];
	}
	printf("\n");
	avg = sum / 4.0;
	printf("���v�l�F%f\n", sum);
	printf("���ϒl�F%f\n", avg);
	return 0;
}