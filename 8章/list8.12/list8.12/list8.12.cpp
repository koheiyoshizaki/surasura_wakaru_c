#include <stdio.h>

void shakkin(int a[]){

	for(int i = 0; i < 5; i = i++){
	
		printf("shakkin側では、a[%d]はアドレス%pに格納されています。\n", i, &a[i]);
	}

	return;
}

int main(void){

	int b[5] = {1000, 2000, 3000, 4000, 5000};

	for(int i = 0; i < 5; i++){
	
		printf("main側では、b[%d]はアドレス%pに格納されています。\n", i, &b[i]);
	}

	printf("\n");

	shakkin(b);
	printf("配列名bだけだと、%pを示す。\n", b);

	return 0;
}