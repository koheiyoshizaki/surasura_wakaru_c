#include <stdio.h>

int kokan(int *a, int *b){

	int ichiji;

	ichiji = *a;
	*a = *b;
	*b = ichiji;

	printf("kokan関数内での変数aのアドレスは%pです。\n", a);

	return 0;
}

int main(void){

	int a = 100;
	int b = 0;

	printf("交換前は変数aの中身が%dで、変数bの中身が%dです。\n", a, b);

	kokan(&a, &b);

	printf("交換後は変数aの中身が%dで、変数bの中身が%dです。\n", a, b);

	printf("main関数内での変数aのアドレスは%pです。", &a);

	return 0;
}