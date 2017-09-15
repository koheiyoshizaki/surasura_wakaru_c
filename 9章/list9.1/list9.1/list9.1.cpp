#include <stdio.h>

int  main(void){

	struct today{
		char tenki[10];
		int kion;
	};

	struct today kyo;

	kyo.kion = 32;

	printf("¡“ú‚Ì‹C‰·‚Í%d“x‚Å‚µ‚½B\n", kyo.kion);

	return 0;
}