#include<stdio.h>

int main(void) {
	int i, j;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			printf("%d+%d=%d ", i, j, i + j);
		}
		printf("\n");
	}
}
/*��printf�ɂȂ������t���̂�
����formatted�i���������ꂽ�j�̓�����
�Ȃ̂�printf�̓t�H�[�}�b�g�i�����j���w�肵�ďo��(print)���邽�߂̊֐��Ƃ������ƁB
scanf���������R��f�����Ă���B
���Ȃ݂�Python�ł�print�֐��ł������Ȃ��B�����print���^����ꂽ���̑S���A����������
�o�͂��ĂˁI�Ƃ�����荂�@�\���_��Ȗ��߂Ɛ݌v����Ă��邽�߂炵���B�v
C�����printf�͏����w��q���g�����A�]�v�ȏ��������Ȃ������Ƃ̂���*/