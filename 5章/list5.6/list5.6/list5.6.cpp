#include <stdio.h>

int main(void){

	int a = 5;

	printf("１から０までの奇数を表示します。\n");

	for(int a = 1; a <= 10; a = a + 2){
	
		printf("%d\n", a);
	}

	printf("今はもうループから抜けています。変数aの中身は%dです。\n", a);

	return 0;

}