#include <stdio.h>

int main(void){

	//char a[6] = "abcde";
	char a[6];
	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = '\0';

	printf("%s\n", a);

	return 0;
}