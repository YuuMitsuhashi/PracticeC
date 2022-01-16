#include<stdio.h>

int main(void){
	int x, y;
	int ave;

	printf("整数1を入力：");
	scanf("%d", &x);
	printf("整数2を入力：");
	scanf("%d", &y);

	ave = (x + y) / 2;

	printf("2つの数の平均値に符号を反転させた値は%d\n", -ave);

	return 0;
}
