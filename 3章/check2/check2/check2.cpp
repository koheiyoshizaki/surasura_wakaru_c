#include <stdio.h>

int main(void){

	int a = 0;

	printf("整数を入力してください。\n");
		scanf("%d", &a);

	a = a + 1;

	printf("１を加算すると%dになります。", a);

	return 0;
}