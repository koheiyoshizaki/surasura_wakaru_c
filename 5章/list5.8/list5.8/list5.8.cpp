#include <stdio.h>

int main(void){

	int a = 7;	//正解を格納する変数。正解として７をセット
	int b = 0;	//利用者に入力してもらう数値を格納する変数

	printf("数当てゲームをしましょう。\n");
	printf("整数を入力してください。\n");

	scanf("%d", &b);

	/*
	while(a != b){
	
		printf("ハズレです。\n");
		scanf("%d", &b);
	
	}
	*/

	for(int c = 0; a != b; c = 0){
	
		printf("ハズレです。\n");
		scanf("%d", &b);

	}

	printf("正解です。\n");

	return 0;

}