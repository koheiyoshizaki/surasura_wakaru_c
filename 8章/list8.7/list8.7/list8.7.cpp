#include <stdio.h>

int kokan(int *a, int *b){

	int ichiji;

	ichiji = *a;
	*a = *b;
	*b = ichiji;

	printf("kokan�֐����ł̕ϐ�a�̃A�h���X��%p�ł��B\n", a);

	return 0;
}

int main(void){

	int a = 100;
	int b = 0;

	printf("�����O�͕ϐ�a�̒��g��%d�ŁA�ϐ�b�̒��g��%d�ł��B\n", a, b);

	kokan(&a, &b);

	printf("������͕ϐ�a�̒��g��%d�ŁA�ϐ�b�̒��g��%d�ł��B\n", a, b);

	printf("main�֐����ł̕ϐ�a�̃A�h���X��%p�ł��B", &a);

	return 0;
}