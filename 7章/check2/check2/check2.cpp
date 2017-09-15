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

	printf("‚Q‚Â‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");

	scanf("%d", &d);
	scanf("%d", &e);

	f = okkii(d, e);

	printf("‘å‚«‚¢”’l‚Í%d‚Å‚·B\n", f);

	return 0;
}