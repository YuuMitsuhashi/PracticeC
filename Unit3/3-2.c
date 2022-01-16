#include<stdio.h>

int main(void){
	int a, b;

	printf("整数1を入力：");
	scanf("%d", &a);
	printf("整数2を入力：");
	scanf("%d", &b);

	if(a % b)
		puts("2は1の約数ではありません\n");
	else
		puts("2は1の約数です\n");

	return 0;
}
