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

	printf("�Q�̐�������͂��Ă��������B\n");

	scanf("%d", &d);
	scanf("%d", &e);

	f = okkii(d, e);

	printf("�傫�����l��%d�ł��B\n", f);

	return 0;
}