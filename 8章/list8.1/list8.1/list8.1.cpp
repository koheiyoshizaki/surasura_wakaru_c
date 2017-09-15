#include <stdio.h>

int main(void){

	int a = 10;

	printf("変数aの中身は、アドレス%pに格納されています。\n", &a);

	return 0;
}