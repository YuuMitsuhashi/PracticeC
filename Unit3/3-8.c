#include<stdio.h>

int main(void){
	int a, b, c, d, max;

	printf("整数1を入力：");
	scanf("%d", &a);
	printf("整数2を入力：");
	scanf("%d", &b);
	printf("整数3を入力：");
	scanf("%d", &c);
	printf("整数4を入力：");
	scanf("%d", &d);

	max = a;

	if(b > max)
		max = b;
	if(c > max)
		max = c;
	if(d > max)
		max = d;

	printf("4つの整数の最大値は%d\n", max);

	return 0;
}
