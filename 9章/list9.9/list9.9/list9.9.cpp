#include <stdio.h>

int main(void){

	FILE *f;
	int a[500];

	f = fopen("test.text", "r");
	
	if(f == NULL){
		printf("�t�@�C�����J���Ȃ�����\n");
		return 1;
	}

	else{
		printf("�t�@�C�����J������\n");
	}

	while(fscanf(f, "%s", a) != EOF){
		printf("%s\n", a);
	}

	fclose(f);
	printf("�t�@�C������܂���\n");

	return 0;
}