#include <stdio.h>

int ayamaru(int a){

	for(int i = 1; i <= a; i = i++){
	
		printf("���߂�Ȃ����B\n");
		
	}
	return 10;
}

int main(void){

	int b = 0;

	printf("�����N�A�����������Ă�B\n");
	b = ayamaru(5);
	printf("�߂��Ă������ʂ́A%d�ł����B\n\n", b);

	printf("�����N�A�܂��Q�[�����Ă����̂��ˁB\n");
	b = ayamaru(2);
	printf("�߂��Ă������ʂ́A%d�ł����B\n\n", b);

	printf("�����N�A�����x��łˁB\n");
	b = ayamaru(0);
	printf("�߂��Ă������ʂ́A%d�ł����B\n\n", b);

	return 0;
}