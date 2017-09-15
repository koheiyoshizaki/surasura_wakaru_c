#include<stdio.h>

int main(void){
	
	int a = 0;
	int b = 0;

	printf("かけ算計算機へようこそ！\n");
	printf("かけられる数（整数限定）を入力してください。\n");
		scanf("%d", &a);

	printf("かける数（整数限定）を入力してください。\n");
		scanf("%d", &b);

	printf("%dと%dをかけると、%dになります。", a, b, a*b);

	return 0;

}