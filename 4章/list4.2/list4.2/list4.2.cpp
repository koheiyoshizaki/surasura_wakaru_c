#include <stdio.h>

int main(void){

	int a = 0;

	printf("血液型占いにようこそ。\n");
	printf("A型なら１　B型なら２　O型なら３　AB型なら４を入力してください。\n");

	scanf("%d", &a);

	if(a == 1){
		printf("几帳面なんですね。\n");
		printf("失恋には弱いそうですね。\n");
	}
	else if(a == 2){
		printf("天真爛漫なんですね。\n");
	}
	else if(a == 3){
		printf("親分肌なんですね。\n");
	}
	else if(a == 4){
		printf("知識欲が旺盛なんですね。\n");
	}
	else
		printf("ちゃんとやってください。\n");

	return 0;
}