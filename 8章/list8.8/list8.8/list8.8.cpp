#include <stdio.h>

int a = 100;
int b = 0;

int kokan(int x, int y){

	a = y;
	b = x;

	return 0;
}

int main(void){

	printf("�����O�͕ϐ�a�̒��g��%d�ŁA�ϐ�b�̒��g��%d�ł��B\n", a, b);

	kokan(a, b);

	printf("������͕ϐ�a�̒��g��%d�ŁA�ϐ�b�̒��g��%d�ł��B\n", a, b);

	return 0;
}