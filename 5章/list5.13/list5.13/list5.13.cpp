#include <stdio.h>

int main(void){

	int a = 7;
	int b = 0;
	printf("�����ăQ�[�������܂��傤�B\n");
	printf("��������͂��Ă��������B\n");

	scanf("%d", &b);

	while(a != b){
	
		if(b == 1234) break;

		printf("�n�Y���ł��B\n");
		scanf("%d", &b);

	}

	printf("�����ł�\n");

	return 0;

}