#include <stdio.h>

int main(void){

	int a = 0;

	printf("奇数か偶数かを判定するプログラムです。\n");
	printf("整数を入力してください。\n");

	scanf("%d", &a);

	if(a % 2 == 0){
		printf("これは偶数です。\n");
	}
	else
		printf("これは奇数です。\n");

	return 0;
}