#include <stdio.h>

int main(void){
	
	char a;
	char *pa;

	a = 'a';
	pa = &a;

	printf("�ϐ�a�̃A�h���X��%p�ł��B\n", pa);
	printf("�ϐ�a�̓��e��%c�ł��B\n", *pa);

	return 0;
}