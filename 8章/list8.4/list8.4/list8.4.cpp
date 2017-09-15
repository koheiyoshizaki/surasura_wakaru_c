#include <stdio.h>

int main(void){

	int *pa;		//ポインタの宣言

	int a = 0;	//変数aの宣言
	pa = &a;	//ポインタpaに変数aのアドレスを代入

	a = 10;		//直接参照で代入する

	printf("変数aの中身は、%dです。\n", a);
	printf("変数aの「アドレス」に、５を格納します。\n");

	*pa = 5;

	printf("変数aの中身は、%dです。\n", a);

	return 0;
}