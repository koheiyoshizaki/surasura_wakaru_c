#include <stdio.h>

int main(void){

	struct today{
		char tenki[10];
		int kion;
	};

	struct today kyo;
	struct today ashita;

	kyo.kion = 32;
	printf("今日の気温は%d度でした。\n", kyo.kion);

	printf("今日の天気を入力してください。\n");
	scanf("%s", kyo.tenki);

	printf("今日の天気は%sですか。\n", kyo.tenki);

	ashita = kyo;

	printf("明日の気温も%d度ですか。\n", ashita.kion);
	printf("明日の天気も%sですか。\n", ashita.tenki);

	return 0;
}