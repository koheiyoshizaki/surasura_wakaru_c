#include <stdio.h>

int main(void){

	struct today{
		char tenki[10];
		int kion;
	};

	struct today kyo;
	struct today ashita;

	kyo.kion = 32;
	printf("�����̋C����%d�x�ł����B\n", kyo.kion);

	printf("�����̓V�C����͂��Ă��������B\n");
	scanf("%s", kyo.tenki);

	printf("�����̓V�C��%s�ł����B\n", kyo.tenki);

	ashita = kyo;

	printf("�����̋C����%d�x�ł����B\n", ashita.kion);
	printf("�����̓V�C��%s�ł����B\n", ashita.tenki);

	return 0;
}