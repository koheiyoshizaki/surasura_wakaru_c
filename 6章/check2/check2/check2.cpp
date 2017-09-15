#include <stdio.h>

int main(void){

	char a[95];
	int j = 0;

	for(int i = 33; i <= 126; i++){
		
			a[j] = i;
			j = j + 1;
		
	}

	printf("•¶Žš—ñ‚ð•\Ž¦\n");
	printf("%s", a);

	return 0;
}