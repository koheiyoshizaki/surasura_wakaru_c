#include <stdio.h>

int main(void){

	int a = 0;
	int b = 0;
	int c = 0;

	printf("�󂩂珗�̎q���ӂ��Ă����B\n");
	printf("	1 = �����Ȃ��ᎀ�񂶂Ⴄ��B\n");
	printf("	2 = ���~�������v�t���j�q�̖{���B\n");

	scanf("%d", &c);

	if(c == 1){
		b = 2;
	}
	if(c == 2){
		b = 1;
	}

	printf("�N�b�L�[���Ă����񂾂��ǁA�H�ׂĂ����H\n");
	printf("	1 = ������񂾂�B\n");
	printf("	2 = �����Ƃ����Ƃ��ԈႦ�ĂȂ��H�B\n");
	printf("	3 = �Ȃ񂩁A�l�Ԃ��H�ׂ�ׂ��łȂ��L�C��������B\n");
	printf("	4 = �N�b�L�[�͌����Ȃ񂾁B����A�ނ��돗�̎q�������Ȃ񂾁B\n");

	scanf("%d", &c);

	switch(c){
	
	case 1: a = 10;
		break;

	case 2: a = 4;
		break;

	case 3: a = 10;
		break;

	case 4: a = 100;
		break;
	}

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