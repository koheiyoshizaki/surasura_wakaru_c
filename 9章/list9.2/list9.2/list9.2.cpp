#include <stdio.h>

int  main(void){

	struct today{
		char tenki[10];
		int kion;
	};

	struct today kyo;

	kyo.kion = 32;

	printf("�����̋C����%d�x�ł����B\n", kyo.kion);

	return 0;
}