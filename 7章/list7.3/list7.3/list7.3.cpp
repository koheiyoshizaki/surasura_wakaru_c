#include <stdio.h>

void ayamaru(int a){

	for(int i = 1; i <= a; i = i++){
	
		printf("���߂�Ȃ����B\n");
		
	}
	return;
}

int main(void){

	printf("�����N�A�����������Ă�B\n");
	ayamaru(5);

	printf("�����N�A�܂��Q�[�����Ă����̂��ˁB\n");
	ayamaru(2);

	printf("�����N�A�����x��łˁB\n");
	ayamaru(0);

	return 0;
}