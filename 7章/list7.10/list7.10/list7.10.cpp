#include <stdio.h>

int a = 1;

void ayamaru(void){

	int a = 2;
	printf("ayamaru�֐�����̂��m�点�ł��B\n");
	printf("a(�O���[�o���֐�)�̒��g��%d�ł��B\n", a);
	
	return;
}

int main(void){
	
	ayamaru();

	printf("main�֐�����̂��m�点�ł��B\n");
	printf("a(�O���[�o���֐�)�̒��g��%d�ł��B\n", a);
	
	return 0;
}