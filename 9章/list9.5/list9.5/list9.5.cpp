#include <stdio.h>

typedef struct body{
	float shincho;
	float taiju;
	float bmi;
} bo;

int main(void){

	bo ore = {165.0, 65.0};

	printf("���̐g����%fcm�ł��B\n", ore.shincho);
	printf("���̑̏d��%fkg�ł��B\n", ore.taiju);

	ore.shincho = ore.shincho / 100;
	ore.bmi = ore.taiju / ore.shincho / ore.shincho;

	printf("���̑̊i�w����%f�ł��B\n", ore.bmi);

	return 0;
}