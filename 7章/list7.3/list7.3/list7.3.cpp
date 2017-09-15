#include <stdio.h>

void ayamaru(int a){

	for(int i = 1; i <= a; i = i++){
	
		printf("ごめんなさい。\n");
		
	}
	return;
}

int main(void){

	printf("岡嶋君、あっちいってよ。\n");
	ayamaru(5);

	printf("岡嶋君、またゲームしていたのかね。\n");
	ayamaru(2);

	printf("岡嶋君、遠足休んでね。\n");
	ayamaru(0);

	return 0;
}