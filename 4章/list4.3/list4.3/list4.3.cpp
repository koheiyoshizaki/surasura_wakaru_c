#include <stdio.h>

int main(void){

	int a = 0;

	printf("���t�^�肢�ɂ悤�����B\n");
	printf("A�^�Ȃ�P�@B�^�Ȃ�Q�@O�^�Ȃ�R�@AB�^�Ȃ�S����͂��Ă��������B\n");

	scanf("%d", &a);

	switch(a){
	
		case 1:
			printf("�{���ʂȂ�ł��ˁB\n");
			printf("�����ɂ͎ア�����ł���\n");
			break;

		case 2:
			printf("�V�^ࣖ��Ȃ�ł��ˁB\n");
			break;

		case 3:
			printf("�e�����Ȃ�ł��ˁB\n");
			break;

		case 4:
			printf("�m���~�������Ȃ�ł���\n");
			break;
	}

	return 0;
}