#include <stdio.h>

int main(void){

	int *pa;
	int a = 10;

	pa = &a;

	printf("�܂��A�ϐ�a�̂����炢�ł��B\n");
	printf("����͂ӂ���%d�ł��B��������ʂ�ł��ˁB\n\n", a);

	printf("���ɕϐ�a�̃A�h���X���|�C���^pa�Ɋi�[���܂����B\n");
	printf("�|�C���^pa�̒��g�A���Ȃ킿�ϐ�a�̃A�h���X��%p�Ԓn�ł��B\n\n", pa);

	printf("���̔Ԓn�Ɋi�[����Ă��鐔�l�́A%d�ł��B\n", *pa);
	printf("��̐��l���A�ϐ�a�̒��g�Ɣ�ׂĂ݂Ă��������B\n\n");

	printf("�ꏏ�ł���ˁB\n");

	return 0;
}