#include <stdio.h>

int main(void){

	FILE *f;

	f = fopen("test.text", "r");

	if(f == NULL){
		printf("�t�@�C�����J���Ȃ�����\n");
		return 1;
	}

	else{
		printf("�t�@�C�����J������\n");
	}

	fclose(f);
	printf("�t�@�C�����J���ĕ��܂���\n");

	return 0;
}