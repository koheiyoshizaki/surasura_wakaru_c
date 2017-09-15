#include <stdio.h>

int main(void){

	int a = 7;
	int b = 0;
	printf("数当てゲームをしましょう。\n");
	printf("整数を入力してください。\n");

	scanf("%d", &b);

	while(a != b){
	
		if(b == 1234) break;

		printf("ハズレです。\n");
		scanf("%d", &b);

	}

	printf("正解です\n");

	return 0;

}