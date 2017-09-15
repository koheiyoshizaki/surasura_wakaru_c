#include <stdio.h>

int main(void){
	
	char a;
	char *pa;

	a = 'a';
	pa = &a;

	printf("変数aのアドレスは%pです。\n", pa);
	printf("変数aの内容は%cです。\n", *pa);

	return 0;
}