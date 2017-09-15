#include <stdio.h>

int main(void){

	int a = 0, b = 0;

	printf("®”‚ğ‚Q‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");

	scanf("%d", &a);
	scanf("%d", &b);

	if(a > b){
		printf("‘å‚«‚¢‚Ì‚Í%d‚Å‚·B", a);
	}
	else if(a < b){
		printf("‘å‚«‚¢‚Ì‚Í%d‚Å‚·B", b);
	}

	return 0;
}