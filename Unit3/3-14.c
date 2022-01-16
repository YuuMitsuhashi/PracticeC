#include<stdio.h>

int main(void){
	int a, b, max, min;

	puts("2つの整数を入力してください");
	printf("整数1：");
	scanf("%d", &a);
	printf("整数2：");
	scanf("%d", &b);

	if(a == b)
		puts("2の整数は同じ値\n");
	else if(a < b){
		max = b;
		min = a;
	}

	else if(a > b){
		max = a;
		min = b;
	}

	printf("小さいほうの値は%d,大きいほうの値は%d\n", min, max);

	return 0;
}
