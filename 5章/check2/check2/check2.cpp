#include <stdio.h>

int main(void){

	int a;
	int b;
	
	printf("表示させたい♪の数を入力してください。\n");
	scanf("%d", &b);

	while(a < b){
	
		printf("♪");
		a++;
	
	}

	return 0;
}
