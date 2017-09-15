#include <stdio.h>

int main(void){

	int a = 1;
	int b = 2;

	printf("aの中身は%dです。\n", a);
	printf("bの中身は%dです。\n", b);

	a = b;
	printf("aの中身は%dになりました。", a);

	return 0;
}