#include<stdio.h>

int main(void) {

	int n[] = { 5,4,3,2,1,0 };
	int i;
	for (i = 0; i <6 ; i++) {
		printf("n[%d]= %d ", i, n[i]);
		//�z��͈̔͊O�ɃA�N�Z�X����ƁA����`����Ƃ���\�����ʓ����������A
		//�v���O�������N���b�V������\��������B
		//C����ł͔z��͈̔͊O�ɃA�N�Z�X���Ă��G���[���o�Ȃ����ߒ��ӂ��K�v�B
		
		/*����h���ɂ͓�̕��@������Ƃ̂��ƁB
		�P���A�u�z��̗v�f����ϐ��ŊǗ�������@�v
		#include<stddef.h>�@�@��size_t�^���g�����߂Ƀw�b�_�[�t�@�C����ǂݍ��ށB
		#define array_size 6�@���}�N���Ŕz��̃T�C�Y���`���Ă���B
								#define�Œ�`���ꂽ�}�N�����i��FARRAY_SIZE�j���A
								�w�肳�ꂽ�e�L�X�g�i��F6�j�ɂ��ׂĒu��������B
								Excel�̃}�N���Ƃ͈قȂ�AC����̃}�N����
								�R���p�C���O�ɕʂ̕�����i���l�ł�OK�j�ɒu��������@�\�����B
		int main(void){
			int n[array_size] = { 5,4,3,2,1,0 };
			size_t i; size_t�͕������������^�ƌ����A
			�z��̗v�f�����Ǘ�����̂ɓK���Ă���B
			z: size_t�^��\���B�is��t�͂��łɑ��̏����w��q�Ŏg���Ă���̂�z�Ƃ̂��ƁB�j
			u: unsigned int�i�����Ȃ������j��\���B

			for (i = 0; i < array_size; i++) {
				printf("n[%zu]= %d ", i, n[i]); %zu�͎��size_t�^�̏����w��q�Ƃ��Ďg����B
			}
			printf("\n");
			return 0;
		}
		2�ڂ��u�R���p�C������sizeof()���Z�q���g���Ĕz��v�f���������v�Z��������@�v
		sizeof�̓R���p�C���ɂ���ē��ʂɈ����鉉�Z�q�B�֐��ƈႢ���s���ł͂Ȃ��A
		�R���p�C�����ɃR���p�C���ɂ���Čv�Z�����B
		#include<stddef.h>
		int main(void){
			int n[]={5,4,3,2,1,0};
			size_t array_size = sizeof(n)/sizeof(n[0]);

			//sizeof(n)�͔z��n�̑S�̂̃T�C�Y���o�C�g�P�ʂŕԂ��B
			//int�^�̃T�C�Y�͒ʏ�4�o�C�g�B4*6=24�o�C�g�B
			//�����sizeof(n[0])�܂�z��̍ŏ��̗v�f�̃T�C�Y�Ŋ��邱�ƂŁA
			//�z��̗v�f�����v�Z���Ă���B����̗�ł�24/4=6�ƂȂ�B
		*/
	}
	printf("\n");
	return 0;
}