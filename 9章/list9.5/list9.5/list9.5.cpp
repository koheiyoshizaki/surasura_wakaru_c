#include <stdio.h>

typedef struct body{
	float shincho;
	float taiju;
	float bmi;
} bo;

int main(void){

	bo ore = {165.0, 65.0};

	printf("私の身長は%fcmです。\n", ore.shincho);
	printf("私の体重は%fkgです。\n", ore.taiju);

	ore.shincho = ore.shincho / 100;
	ore.bmi = ore.taiju / ore.shincho / ore.shincho;

	printf("私の体格指数は%fです。\n", ore.bmi);

	return 0;
}