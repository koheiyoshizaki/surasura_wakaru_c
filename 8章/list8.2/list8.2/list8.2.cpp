#include <stdio.h>

int main(void){

	int *pa;
	int a = 10;

	pa = &a;

	printf("�ϐ�a�̃A�h���X���|�C���^pa�Ɋi�[���܂����B\n");
	printf("�|�C���^pa�̒��g�́A%p�ł��B\n", pa);
	printf("�ϐ�a�̃A�h���X��%p�ł��B\n", &a);

	return 0;
}