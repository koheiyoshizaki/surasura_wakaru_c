#include <stdio.h>

int main(void){

	int a[3][3];

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

	return 0;
}

