#include <stdio.h>

int main(void){

	int a = 0, b = 0;

	printf("整数を２つ入力してください。\n");

	scanf("%d", &a);
	scanf("%d", &b);

	if(a > b){
		printf("大きいのは%dです。", a);
	}
	else if(a < b){
		printf("大きいのは%dです。", b);
	}
	else if(a == b){
		printf("２つの数値は同じです。\n");
	}

	return 0;
}