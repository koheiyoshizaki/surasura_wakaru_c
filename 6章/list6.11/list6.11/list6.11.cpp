#include <stdio.h>

int main(void){

	char a[50];

	printf("なにか文字列を入力してください。\n");
	scanf("%s", a);

	printf("あなたが入力した文字列は「%s」ですね。\n", a);

	return 0;
}