#include<stdio.h>

int main(void){
	int a;
	printf("整数を入力：");
	scanf("%d", &a);

	printf("10で割った商は%d\n", a/10);
	printf("10で割った余りは%d\n", a%10);

	return 0;
}

