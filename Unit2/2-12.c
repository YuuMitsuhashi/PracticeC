#include<stdio.h>

int main(void){
	int height;
	printf("身長を入力：");
	scanf("%d", &height);

	printf("あなたの標準体重は%.1f\n", (height - 100) * 0.9);

	return 0;
}
