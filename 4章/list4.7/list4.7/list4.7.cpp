#include <stdio.h>

int main(void){

	int a = 0;
	int b = 0;

	printf("�D���x�𐮐��œ��͂��Ă��������B\n");
	scanf("%d", &a);

	printf("�t���OON�Ȃ�P�@OFF�Ȃ炻��ȊO�̐�������͂��Ă��������B\n");
	scanf("%d", &b);

	if(a >= 5 && b == 1){
			printf("�g�D���[�G���h\n");
		}

	if(a >= 5 && b != 1){
			printf("�������F�B�ł��܂��傤�G���h\n");
		}
	
	if(a < 5 && b == 1){
			printf("�S�{�G���h\n");
		}
		
	if(a < 5 && b != 1){
			printf("�o�b�h�G���h\n");
		}

	return 0;
}