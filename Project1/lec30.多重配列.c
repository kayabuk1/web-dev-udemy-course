#include<stdio.h>

int main(void) {
	int a[3][4];
	int m, n;
	//�ŏ���[3]��[�s]�B����[4]��[��]�B

	for (m = 0; m < 3; m++) {//�O���̂��̃��[�v�ōs�𐧌�B0�`2�܂Ōv3��J��Ԃ�
		for (n = 0; n < 4; n++)//�����̃��[�v�ŗ�𐧌�B�O����ٰ��1�񖈂�0�`3�܂Ōv4��J��Ԃ��B
			a[m][n] = m + n;//�l�̑������m��n�̍��v��a[m][n]�̈ʒu�Ɋi�[�����B
		}

	for (m = 0; m < 3; m++) {
		for (n = 0; n < 4; n++) {
			printf("%d ", a[m][n]);
		}
		printf("\n");
	}
	return 0;
}