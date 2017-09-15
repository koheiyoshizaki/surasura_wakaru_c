#include <stdio.h>

int main(void){

	FILE *f;
	f = fopen("seiyu.text", "a");

	if(f == NULL){
		printf("ファイルが開けません\n");
		return 0;
	}
	else{
		printf("ファイルが開けたぞ\n");
	}

	char name[10][50];
	int age[10];
	char daihyousaku[10][100];

	printf("好きな声優さんの名前、年齢、代表作を入力してください\n");

	for(int i = 0; i < 10; i++){
		
		scanf("%s %d %s", name[i], &age[i], daihyousaku[i]);
		fprintf(f, "%s %d %s\n", name[i], &age[i], daihyousaku[i]);
	}

	fclose(f);
	printf("ファイルを閉じました\n");

	return 0;
}