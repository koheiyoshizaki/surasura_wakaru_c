#include <stdio.h>

int a = 1;

void ayamaru(void){

	int b = 2;
	printf("ayamaru�֐�����̂��m�点�ł��B\n");
	printf("a(�O���[�o���֐�)�̒��g��%d�ł��B\n", a);
	printf("b(���[�J���֐�)�̒��g��%d�ł��B\n\n", b);

	return;
}

int main(void){
	
	ayamaru();

	int c = 3;
	printf("main�֐�����̂��m�点�ł��B\n");
	printf("a(�O���[�o���֐�)�̒��g��%d�ł��B\n", a);
	printf("c(���[�J���֐�)�̒��g��%d�ł��B\n", c);
	//printf("b(���[�J���֐�)�̒��g��%d�ł��B\n", b);

	return 0;
}