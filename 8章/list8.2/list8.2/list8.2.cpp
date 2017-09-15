#include <stdio.h>

int main(void){

	int *pa;
	int a = 10;

	pa = &a;

	printf("変数aのアドレスをポインタpaに格納しました。\n");
	printf("ポインタpaの中身は、%pです。\n", pa);
	printf("変数aのアドレスは%pです。\n", &a);

	return 0;
}