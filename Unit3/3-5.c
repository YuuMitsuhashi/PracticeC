#include<stdio.h>

int main(void){
	int a, b;

	printf("整数aを入力：");
	scanf("%d", &a);
	printf("整数bを入力：");
	scanf("%d", &b);

	if(a > b)
		puts("aはbよりも大きい\n");
	else if(a < b)
		puts("bはaよりも大きい\n");

	return 0;
}
