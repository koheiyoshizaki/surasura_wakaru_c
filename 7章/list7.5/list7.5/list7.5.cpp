#include <stdio.h>

int ayamaru(int a){

	for(int i = 1; i <= a; i = i++){
	
		printf("���߂�Ȃ����B\n");
		
	}
	return a + 3;
}

int main(void){

	int b;

	printf("�����N�A�����������Ă�B\n");
	b = ayamaru(5);
	printf("%d��ӂ�܂����B\n\n", b);

	printf("�����N�A�܂��Q�[�����Ă����̂��ˁB\n");
	b = ayamaru(2);
	printf("%d��ӂ�܂����B\n\n", b);

	printf("�����N�A�����x��łˁB\n");
	b = ayamaru(0);
	printf("%d��ӂ�܂����B\n\n", b);

	return 0;
}