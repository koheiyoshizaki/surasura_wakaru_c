#include <stdio.h>

int main(void){

	char a[100];

	printf("お名前を入力してください。\n");
	scanf("%s", a);
	printf("あなたのお名前は%sさんとおっしゃるのですか。\n", a);

	printf("ご年齢を入力してください。\n");
	scanf("%s", a);
	printf("あなたは%s歳なのですね。\n", a);

	printf("ご出身地を入力してください。\n");
	scanf("%s", a);
	printf("%sの出ですか。\n", a);

	return 0;

}