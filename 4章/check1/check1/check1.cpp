#include <stdio.h>

int main(void){

	int a = 0, b = 0;

	printf("�������Q���͂��Ă��������B\n");

	scanf("%d", &a);
	scanf("%d", &b);

	if(a > b){
		printf("�傫���̂�%d�ł��B", a);
	}
	else if(a < b){
		printf("�傫���̂�%d�ł��B", b);
	}

	return 0;
}