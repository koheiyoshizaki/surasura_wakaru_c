#include <stdio.h>

int main(void){

	int a[3][3];
	int i, j;

	a[0][0] = 5;
	a[0][1] = 5;
	a[0][2] = 5;
	a[1][0] = 5;
	a[1][1] = 5;
	a[1][2] = 4;
	a[2][0] = 5;
	a[2][1] = 3;
	a[2][2] = 2;

	for(int i = 0; i <= 2; i++){
		for(int j = 0; j <= 2; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

	printf("���Ȃ��͂ǂ̕ӂɂ��܂����H���l�œ��͂��Ă��������B\n");
	printf("�@0...�k�̂ق��@1...�^�񒆁@2...��̂ق�\n");
	scanf("%d", &i);

	printf("���Ȃ��͂ǂ̕ӂɂ��܂����H���l�œ��͂��Ă��������B\n");
	printf("�@0...���̂ق��@1...�^�񒆁@2...���̂ق�\n");
	scanf("%d", &j);

	switch(a[i][j]){
	
	case 1:
		printf("����\n");
		break;

	case 2:
		printf("�鉺��\n");
		break;

	case 3:
		printf("����\n");
		break;

	case 4:
		printf("����n\n");
		break;
	
	case 5:
		printf("�c���h���n��\n");
		break;

	}

	return 0;
}

