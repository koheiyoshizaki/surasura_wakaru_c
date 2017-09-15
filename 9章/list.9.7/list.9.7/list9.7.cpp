#include <stdio.h>

int main(void){

	FILE *f;

	f = fopen("test.text", "r");

	if(f == NULL){
		printf("ファイルが開けなかった\n");
		return 1;
	}

	else{
		printf("ファイルが開けたぞ\n");
	}

	fclose(f);
	printf("ファイルを開いて閉じました\n");

	return 0;
}