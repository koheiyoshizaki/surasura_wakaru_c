#include <stdio.h>

int main(void){

	int a = 1;
	int b = 2;

	printf("a�̒��g��%d�ł��B\n", a);
	printf("b�̒��g��%d�ł��B\n", b);

	a = b;
	printf("a�̒��g��%d�ɂȂ�܂����B", a);

	return 0;
}