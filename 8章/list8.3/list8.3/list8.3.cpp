#include <stdio.h>

int main(void){

	int *pa;
	int a = 10;

	pa = &a;

	printf("まず、変数aのおさらいです。\n");
	printf("これはふつうに%dです。代入した通りですね。\n\n", a);

	printf("次に変数aのアドレスをポインタpaに格納しました。\n");
	printf("ポインタpaの中身、すなわち変数aのアドレスは%p番地です。\n\n", pa);

	printf("その番地に格納されている数値は、%dです。\n", *pa);
	printf("上の数値を、変数aの中身と比べてみてください。\n\n");

	printf("一緒ですよね。\n");

	return 0;
}