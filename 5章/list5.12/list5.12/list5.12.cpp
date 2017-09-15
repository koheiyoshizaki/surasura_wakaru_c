#include <stdio.h>

int main(void){

	int a = 7;
	int b = 0;
	printf("数当てゲームをしましょう。\n");
	printf("整数を入力してください。\n");

	do{
	
		scanf("%d", &b);
		printf("ハズレです。\n");
	
	}while(a != b);

	printf("正解です\n");

	return 0;

}