#include <stdio.h>

int main(void){

	float a, b;
	float *pa, *pb;

	pa = &a;
	pb = &b;

	printf("À”‚ğ‚Q‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");

	scanf("%f", pa);
	scanf("%f", pb);

	printf("‘«‚µZ‚ÌŒ‹‰Ê‚Í%f‚Å‚·B\n", *pa + *pb);

	return 0;
}