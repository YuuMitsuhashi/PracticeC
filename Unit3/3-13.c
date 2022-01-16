#include<stdio.h>

int main(void){
	int score;

	printf("スコアを入力：");
	scanf("%d", &score);

	if(score < 0 || 100 < score)
		puts("不正な点数\n");
	else if(score <= 59)
		puts("不可\n");
	else if(score <= 69)
		puts("可\n");
	else if(score <= 79)
		puts("良\n");
	else
		puts("優良\n");

	return 0;
}

