#include <stdio.h>

int main(void){

	int a = 0;
	int b = 0;

	printf("好感度を整数で入力してください。\n");
	scanf("%d", &a);

	printf("フラグONなら１　OFFならそれ以外の整数を入力してください。\n");
	scanf("%d", &b);

	if(a >= 5 && b == 1){
			printf("トゥルーエンド\n");
		}

	if(a >= 5 && b != 1){
			printf("いいお友達でいましょうエンド\n");
		}
	
	if(a < 5 && b == 1){
			printf("鬼畜エンド\n");
		}
		
	if(a < 5 && b != 1){
			printf("バッドエンド\n");
		}

	return 0;
}