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

	printf("�Q�̐�������͂��Ă��������B\n");

	scanf("%d", &c);
	scanf("%d", &d);

	e = okkii(c, d);

	printf("�傫�����l��%d�ł��B\n", e);

	return 0;
}