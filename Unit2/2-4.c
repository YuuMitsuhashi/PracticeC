#include<stdio.h>

int main(void){
	int x, y;

	printf("整数1を入力：");
	scanf("%d", &x);
	printf("整数2を入力：");
	scanf("%d", &y);

	printf("2つの整数の和は%d\n", x + y);
	printf("2つの整数の積は%d\n", x * y);

	return 0;
}
