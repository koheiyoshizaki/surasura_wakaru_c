#include <stdio.h>

int okkii(int a, int b){

	if(a > b){
	
		return a;
	}

	else if(a < b){
	
		return b;
	}

}

int main(void){

	int c, d, e;

	printf("２つの整数を入力してください。\n");

	scanf("%d", &c);
	scanf("%d", &d);

	e = okkii(c, d);

	printf("大きい数値は%dです。\n", e);

	return 0;
}