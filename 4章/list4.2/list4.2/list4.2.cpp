#include <stdio.h>

int main(void){

	int a = 0;

	printf("���t�^�肢�ɂ悤�����B\n");
	printf("A�^�Ȃ�P�@B�^�Ȃ�Q�@O�^�Ȃ�R�@AB�^�Ȃ�S����͂��Ă��������B\n");

	scanf("%d", &a);

	if(a == 1){
		printf("�{���ʂȂ�ł��ˁB\n");
		printf("�����ɂ͎ア�����ł��ˁB\n");
	}
	else if(a == 2){
		printf("�V�^ࣖ��Ȃ�ł��ˁB\n");
	}
	else if(a == 3){
		printf("�e�����Ȃ�ł��ˁB\n");
	}
	else if(a == 4){
		printf("�m���~�������Ȃ�ł��ˁB\n");
	}
	else
		printf("�����Ƃ���Ă��������B\n");

	return 0;
}