#include <stdio.h>

int ayamaru(int a){

	for(int i = 1; i <= a; i = i++){
	
		printf("ごめんなさい。\n");
		
	}
	return 10;
}

int main(void){

	int b = 0;

	printf("岡嶋君、あっちいってよ。\n");
	b = ayamaru(5);
	printf("戻ってきた結果は、%dでした。\n\n", b);

	printf("岡嶋君、またゲームしていたのかね。\n");
	b = ayamaru(2);
	printf("戻ってきた結果は、%dでした。\n\n", b);

	printf("岡嶋君、遠足休んでね。\n");
	b = ayamaru(0);
	printf("戻ってきた結果は、%dでした。\n\n", b);

	return 0;
}