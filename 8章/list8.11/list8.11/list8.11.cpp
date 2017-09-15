#include <stdio.h>

void shakkin(int a[]){

	for(int i = 0; i < 5; i = i++){
	
		printf("%d‰~‚¨‹à‚ð‚©‚è‚Ü‚µ‚½B\n", a[i]);
	}

	return;
}

int main(void){

	int b[5] = {1000, 2000, 3000, 4000, 5000};

	shakkin(b);

	return 0;
}