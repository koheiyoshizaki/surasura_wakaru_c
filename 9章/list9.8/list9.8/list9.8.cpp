#include <stdio.h>

int main(void){

	FILE *f;

	//f = fopen("test.text", "w");
	f = fopen("test.text", "a");
	
	if(f == NULL){
		printf("�t�@�C�����J���Ȃ�����\n");
		return 1;
	}

	else{
		printf("�t�@�C�����J������\n");
	}

	fprintf(f, "�{���ɏ������߂�̂��ȁH\n");
	fprintf(f, "�Ȃ񂾂����s�������ȋC�����邼�I\n");

	fclose(f);
	printf("�t�@�C������܂���\n");

	return 0;
}