#include <stdio.h>

int main(void){

	int a;
	int b;
	
	printf("表示させたい♪の数を入力してください。\n");
	scanf("%d", &b);

	for(a = 1; a <= b; a++){
	
		printf("♪");
	
	}

	return 0;
}