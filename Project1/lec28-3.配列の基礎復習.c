#include<stdio.h>
#include<stddef.h>
#define array_size 6
/*�Ȃ��}�N���ł̒u���ł́��⏑���w��q���g��Ȃ��̂��H
�v���v���Z�b�T�ŃR���p�C���O�ɍs����}�N���́u���v���g����������R���s���[�^�ɂƂ��ĊȒP�ȏ����Ƃ̂��ƁB
�R���s���[�^��array_size�ƌ�����������Ђ�����Ɍ������āA��������u6�v�ɒu��������ƌ�����Ƃ�����B�B
#define�̓R���p�C�����I���Ə����Ă��܂��̂ŁA���s���ɂ�array_size�͑��݂��Ȃ��B
����ɑ΂��đ���́A�錾���ꂽ�ϐ��ɑ΂��ă��������m�ۂ��āA�v���O�����̈�A�̏��������ϐ����g����ꍇ�ɔ����ĕϐ��ׂ̈̃�������
�m�ۂ��Ēu���K�v������Ƃ̂��ƁB���̈ב���̕�����菈���̃I�[�o�w�b�h���傫���Ƃ̂���*/


int main(void) {
	int n[] = { 5,4,3,2,1,0 };
	int i;

	for (i = 0; i < 7; i++) {
		printf("n[%d]=%d,", i, n[i]);
	}
	printf("\n");

	int m[array_size] = { 5,4,3,2,1,0 };
	size_t j;
	for (j = 0; j < array_size; j++) {
		printf("m[%zu]=%d,", j, m[j]);
	}
	printf("\n");

	int o[] = { 5,4,3,2,1,0 };
	int k;
	size_t array_size2 = sizeof(o) / sizeof(o[0]);
	for (k = 0; k < array_size2; k++) {
		printf("o[%d]=%d,", k, o[k]);
	}
	printf("\n");
	return 0;

	/*���s���ʁ�
n[0]=5,n[1]=4,n[2]=3,n[3]=2,n[4]=1,n[5]=0,n[6]=-858993460,
m[0]=5,m[1]=4,m[2]=3,m[3]=2,m[4]=1,m[5]=0,
o[0]=5,o[1]=4,o[2]=3,o[3]=2,o[4]=1,o[5]=0,
	*/
}