#include <stdio.h>

int main(void){

	float a, b;
	float *pa, *pb;

	pa = &a;
	pb = &b;

	printf("実数を２つ入力してください。\n");

	scanf("%f", pa);
	scanf("%f", pb);

	printf("足し算の結果は%fです。\n", *pa + *pb);

	return 0;
}