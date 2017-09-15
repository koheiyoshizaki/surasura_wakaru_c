#include <stdio.h>

int ayamaru(int a){

	a = a + 5;
	for(int i = 1; i <= a; i = i++){
		printf("ごめんなさい。\n");
	}
	return a;
}

int main(void){

	int b;
	int c = 5;

	printf("岡嶋君、あっちいってよ。\n");
	b = ayamaru(c);

	printf("変数ｃの中身は%dです。\n", c);

	return 0;
}