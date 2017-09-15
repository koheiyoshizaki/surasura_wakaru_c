#include <stdio.h>

int main(void){

	int a[3][3];
	int i, j;

	a[0][0] = 5;
	a[0][1] = 5;
	a[0][2] = 5;
	a[1][0] = 5;
	a[1][1] = 5;
	a[1][2] = 4;
	a[2][0] = 5;
	a[2][1] = 3;
	a[2][2] = 2;

	for(int i = 0; i <= 2; i++){
		for(int j = 0; j <= 2; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

	printf("あなたはどの辺にいますか？数値で入力してください。\n");
	printf("　0...北のほう　1...真ん中　2...南のほう\n");
	scanf("%d", &i);

	printf("あなたはどの辺にいますか？数値で入力してください。\n");
	printf("　0...西のほう　1...真ん中　2...東のほう\n");
	scanf("%d", &j);

	switch(a[i][j]){
	
	case 1:
		printf("お城\n");
		break;

	case 2:
		printf("城下町\n");
		break;

	case 3:
		printf("草原\n");
		break;

	case 4:
		printf("沼沢地\n");
		break;
	
	case 5:
		printf("ツンドラ地帯\n");
		break;

	}

	return 0;
}

