#include <stdio.h>

int main(void){

	float a, b;
	float *pa, *pb;

	pa = &a;
	pb = &b;

	printf("�������Q���͂��Ă��������B\n");

	scanf("%f", pa);
	scanf("%f", pb);

	printf("�����Z�̌��ʂ�%f�ł��B\n", *pa + *pb);

	return 0;
}