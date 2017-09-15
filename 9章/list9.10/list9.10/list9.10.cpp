#include <stdio.h>

int main(void){

	FILE *f;

	struct today{
		char tenki[10];
		int kion;
	};

	struct body{
		float shincho;
		float taiju;
		float bmi;
	};

	struct today kyo;
	struct body ore;

	printf("今日の天気を入力してください\n");
	scanf("%s", kyo.tenki);
	printf("今日の気温を整数で入力してください\n");
	scanf("%d", &kyo.kion);

	printf("今日の身長を実数で入力してください。\n");
	scanf("%f", &ore.shincho);
	printf("今日の体重を実数で入力してください\n");
	scanf("%f", &ore.taiju);

	ore.shincho = ore.shincho / 100;
	ore.bmi = ore.taiju / ore.shincho / ore.shincho;

	f = fopen("test.text", "a");

	if(f == NULL){
		printf("ファイルを開けなかったぞ\n");
		return 1;
	}

	else{
		printf("ファイルを開けたぞ\n");
	}

	fprintf(f, "今日の天気は%sでした。", kyo.tenki);

	if(kyo.kion > 30){
		fprintf(f, "今日は暑すぎでした。\n");
	}
	if(kyo.kion < 10){
		fprintf(f, "今日は寒すぎでした。\n");
	}
	if(kyo.kion <= 30 && kyo.kion >= 10){
		fprintf(f, "今日は気候が良かったです\n");
	}

	if(ore.bmi > 25.0){
		fprintf(f, "今日の体格指数は%fです。もしや太りすぎでは？\n", ore.bmi);
	}
	if(ore.bmi < 18.5){
		fprintf(f, "今日の体格指数は%fです。これは痩せすぎです\n", ore.bmi);
	}
	if(ore.bmi <= 25.0 && ore.bmi >= 18.5){
		fprintf(f, "今日の体格指数は%fです。ちょうどいい感じです\n", ore.bmi);
	}

	fclose(f);
	printf("ファイルを閉じました\n");

	return 0;
}