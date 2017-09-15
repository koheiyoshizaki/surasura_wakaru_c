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

	printf("‚Q‚Â‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");

	scanf("%d", &c);
	scanf("%d", &d);

	e = okkii(c, d);

	printf("‘å‚«‚¢”’l‚Í%d‚Å‚·B\n", e);

	return 0;
}