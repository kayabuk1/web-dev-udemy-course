#include<stdio.h>

int main(void) 
{
	int a;
	int b = 3;
	int add, sub;
	double avg;
	a = 10;//�ϐ��͏��������Ȃ��ƒl���s��ɂȂ�̂ŁA�K�����������邱��
	add = a + b;
	sub = a - b;//sub��subtraction�̗�
	avg = (a + b) / 2.0;//a��b�͐����Ȃ̂ŁA���m�ȕ��ϒl�����߂�ׂɂ�double�^��2.0�ň��K�v������
						//int�^/double�^�̌v�Z���ʂ�double�^�ɂȂ�
	printf("%d+%d=%d\n", a, b, add);
	printf("%d-%d=%d\n", a, b, sub);
	printf("%d��%d�̕��ϒl:%f\n", a, b, avg);
}
/*
�ϐ��͔��B�����f�[�^�̎�ނɉ�����"�^"��"�ϐ���"��錾����B 
 */