#include <stdio.h>

int ayamaru(int a){

	for(int i = 1; i <= a; i = i++){
	
		printf("ごめんなさい。\n");
		
	}
	return a + 3;
}

int main(void){

	int b;

	printf("岡嶋君、あっちいってよ。\n");
	b = ayamaru(5);
	printf("%d回謝りました。\n\n", b);

	printf("岡嶋君、またゲームしていたのかね。\n");
	b = ayamaru(2);
	printf("%d回謝りました。\n\n", b);

	printf("岡嶋君、遠足休んでね。\n");
	b = ayamaru(0);
	printf("%d回謝りました。\n\n", b);

	return 0;
}