#include <stdio.h>

int main(void){

	int a = 0;
	int b = 0;
	int c = 0;

	printf("空から女の子がふってきた。\n");
	printf("	1 = 逃げなきゃ死んじゃうよ。\n");
	printf("	2 = 下敷きこそ思春期男子の本懐。\n");

	scanf("%d", &c);

	if(c == 1){
		b = 2;
	}
	if(c == 2){
		b = 1;
	}

	printf("クッキーを焼いたんだけど、食べてくれる？\n");
	printf("	1 = もちろんだよ。\n");
	printf("	2 = 砂糖とか塩とか間違えてない？。\n");
	printf("	3 = なんか、人間が食べるべきでない臭気を感じる。\n");
	printf("	4 = クッキーは嫌いなんだ。いや、むしろ女の子が嫌いなんだ。\n");

	scanf("%d", &c);

	switch(c){
	
	case 1: a = 10;
		break;

	case 2: a = 4;
		break;

	case 3: a = 10;
		break;

	case 4: a = 100;
		break;
	}

	if(a >= 5 && b == 1){
		printf("トゥルーエンド\n");
	}
	if(a >= 5 && b != 1){
		printf("いいお友達でいましょうエンド\n");
	}
	if(a < 5 && b == 1){
		printf("鬼畜エンド\n");
	}
	if(a < 5 && b != 1){
		printf("バッドエンド\n");
	}

	return 0;
}