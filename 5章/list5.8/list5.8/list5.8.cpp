#include <stdio.h>

int main(void){

	int a = 7;	//�������i�[����ϐ��B�����Ƃ��ĂV���Z�b�g
	int b = 0;	//���p�҂ɓ��͂��Ă��炤���l���i�[����ϐ�

	printf("�����ăQ�[�������܂��傤�B\n");
	printf("��������͂��Ă��������B\n");

	scanf("%d", &b);

	/*
	while(a != b){
	
		printf("�n�Y���ł��B\n");
		scanf("%d", &b);
	
	}
	*/

	for(int c = 0; a != b; c = 0){
	
		printf("�n�Y���ł��B\n");
		scanf("%d", &b);

	}

	printf("�����ł��B\n");

	return 0;

}