#include <stdio.h>

int main(void){

	FILE *f;
	f = fopen("seiyu.text", "a");

	if(f == NULL){
		printf("�t�@�C�����J���܂���\n");
		return 0;
	}
	else{
		printf("�t�@�C�����J������\n");
	}

	char name[10][50];
	int age[10];
	char daihyousaku[10][100];

	printf("�D���Ȑ��D����̖��O�A�N��A��\�����͂��Ă�������\n");

	for(int i = 0; i < 10; i++){
		
		scanf("%s %d %s", name[i], &age[i], daihyousaku[i]);
		fprintf(f, "%s %d %s\n", name[i], &age[i], daihyousaku[i]);
	}

	fclose(f);
	printf("�t�@�C������܂���\n");

	return 0;
}