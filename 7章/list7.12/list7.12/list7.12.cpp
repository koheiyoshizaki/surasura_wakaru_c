#include <stdio.h>

void shinri(char a[], int b);

int main(void){

	char c[50];
	int d;

	printf("�Ȃɂ����҂��Ȃ����߂�Z���t����͂��Ă��������B\n");
	scanf("%s", c);

	printf("���̒��̐S����\�����܂��B����\�����܂����H\n");
	scanf("%d", &d);

	shinri(c, d);

	return 0;
}

void shinri(char a[], int b){

	for(int i = 1; i <= b; i++){
		
		printf("%s�@�������Q�����̒��Ɍ���\n", a);
	}
	return;
}