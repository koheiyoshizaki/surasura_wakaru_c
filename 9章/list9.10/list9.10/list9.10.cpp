#include <stdio.h>

int main(void){

	FILE *f;

	struct today{
		char tenki[10];
		int kion;
	};

	struct body{
		float shincho;
		float taiju;
		float bmi;
	};

	struct today kyo;
	struct body ore;

	printf("�����̓V�C����͂��Ă�������\n");
	scanf("%s", kyo.tenki);
	printf("�����̋C���𐮐��œ��͂��Ă�������\n");
	scanf("%d", &kyo.kion);

	printf("�����̐g���������œ��͂��Ă��������B\n");
	scanf("%f", &ore.shincho);
	printf("�����̑̏d�������œ��͂��Ă�������\n");
	scanf("%f", &ore.taiju);

	ore.shincho = ore.shincho / 100;
	ore.bmi = ore.taiju / ore.shincho / ore.shincho;

	f = fopen("test.text", "a");

	if(f == NULL){
		printf("�t�@�C�����J���Ȃ�������\n");
		return 1;
	}

	else{
		printf("�t�@�C�����J������\n");
	}

	fprintf(f, "�����̓V�C��%s�ł����B", kyo.tenki);

	if(kyo.kion > 30){
		fprintf(f, "�����͏������ł����B\n");
	}
	if(kyo.kion < 10){
		fprintf(f, "�����͊������ł����B\n");
	}
	if(kyo.kion <= 30 && kyo.kion >= 10){
		fprintf(f, "�����͋C�󂪗ǂ������ł�\n");
	}

	if(ore.bmi > 25.0){
		fprintf(f, "�����̑̊i�w����%f�ł��B�����⑾�肷���ł́H\n", ore.bmi);
	}
	if(ore.bmi < 18.5){
		fprintf(f, "�����̑̊i�w����%f�ł��B����͑��������ł�\n", ore.bmi);
	}
	if(ore.bmi <= 25.0 && ore.bmi >= 18.5){
		fprintf(f, "�����̑̊i�w����%f�ł��B���傤�ǂ��������ł�\n", ore.bmi);
	}

	fclose(f);
	printf("�t�@�C������܂���\n");

	return 0;
}