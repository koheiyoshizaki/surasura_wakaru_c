#include <stdio.h>

int ayamaru(int a){

	a = a + 5;
	for(int i = 1; i <= a; i = i++){
		printf("���߂�Ȃ����B\n");
	}
	return a;
}

int main(void){

	int b;
	int c = 5;

	printf("�����N�A�����������Ă�B\n");
	b = ayamaru(c);

	printf("�ϐ����̒��g��%d�ł��B\n", c);

	return 0;
}