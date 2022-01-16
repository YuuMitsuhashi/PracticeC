#include<stdio.h>

int main(void){
	int a, b, c, min;

	printf("整数1を入力：");
	scanf("%d", &a);
	printf("整数2を入力：");
	scanf("%d", &b);
	printf("整数3を入力：");
	scanf("%d", &c);

	min = a;

	if(b < min)
		b = min;
	if(c < min)
		c = min;

	printf("3つの整数の最小値は%d\n", min);

	return 0;
}
