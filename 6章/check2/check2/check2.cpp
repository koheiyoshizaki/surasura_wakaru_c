#include <stdio.h>

int main(void){

	char a[95];
	int j = 0;

	for(int i = 33; i <= 126; i++){
		
			a[j] = i;
			j = j + 1;
		
	}

	printf("文字列を表示\n");
	printf("%s", a);

	return 0;
}