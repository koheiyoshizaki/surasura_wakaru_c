#include <stdio.h>

int main(void){

	int *pa;		//�|�C���^�̐錾

	int a = 0;	//�ϐ�a�̐錾
	pa = &a;	//�|�C���^pa�ɕϐ�a�̃A�h���X����

	a = 10;		//���ڎQ�Ƃő������

	printf("�ϐ�a�̒��g�́A%d�ł��B\n", a);
	printf("�ϐ�a�́u�A�h���X�v�ɁA�T���i�[���܂��B\n");

	*pa = 5;

	printf("�ϐ�a�̒��g�́A%d�ł��B\n", a);

	return 0;
}