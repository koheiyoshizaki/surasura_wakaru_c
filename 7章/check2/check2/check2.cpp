#include <stdio.h>

int okkii(int a, int b){

	int c;

	if(a > b){
	
		c = a;
	}

	else if(a < b){
	
		c = b;
	}

	return c;
}

int main(void){

	int d, e, f;

	printf("２つの整数を入力してください。\n");

	scanf("%d", &d);
	scanf("%d", &e);

	f = okkii(d, e);

	printf("大きい数値は%dです。\n", f);

	return 0;
}