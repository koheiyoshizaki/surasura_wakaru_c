#include <stdio.h>

int main(void){

	FILE *f;

	f = fopen("test.text", "w");
	fclose(f);
	printf("ファイルを開いて閉じました\n");

	return 0;
}