#include <stdio.h>

void shakkin(int a[]){

	for(int i = 0; i < 5; i = i++){
	
		printf("shakkin���ł́Aa[%d]�̓A�h���X%p�Ɋi�[����Ă��܂��B\n", i, &a[i]);
	}

	return;
}

int main(void){

	int b[5] = {1000, 2000, 3000, 4000, 5000};

	for(int i = 0; i < 5; i++){
	
		printf("main���ł́Ab[%d]�̓A�h���X%p�Ɋi�[����Ă��܂��B\n", i, &b[i]);
	}

	printf("\n");

	shakkin(b);
	printf("�z��b�������ƁA%p�������B\n", b);

	return 0;
}