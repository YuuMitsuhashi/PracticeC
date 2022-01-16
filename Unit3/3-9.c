#include<stdio.h>

int main(void){
	int a, b, sa;

	printf("整数1を入力：");
	scanf("%d", &a);
	printf("整数2を入力：");
	scanf("%d", &b);

	if(a < b)
		sa = b - a;
	if(a > b)
		sa = a - b;

	printf("2つの整数の差は%d\n", sa);

	return 0;
}

