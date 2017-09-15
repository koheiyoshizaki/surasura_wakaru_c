#include <stdio.h>

int main(void){

	FILE *f;
	int a[500];

	f = fopen("test.text", "r");
	
	if(f == NULL){
		printf("ファイルが開けなかった\n");
		return 1;
	}

	else{
		printf("ファイルが開けたぞ\n");
	}

	while(fscanf(f, "%s", a) != EOF){
		printf("%s\n", a);
	}

	fclose(f);
	printf("ファイルを閉じました\n");

	return 0;
}