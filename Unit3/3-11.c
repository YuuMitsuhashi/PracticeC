#include<stdio.h>

int main(void){
	int a, b, c;

	puts("3つの整数を入力してください");
	printf("整数1：");
	scanf("%d", &a);
	printf("整数2：");
	scanf("%d", &b);
	printf("整数3：");
	scanf("%d", &c);

	if(a == b && b == c)
		puts("3つの値は等しい\n");

	else if(a == b || b == c || c == a)
		puts("2つの値は等しい\n");
	else
		puts("3つの値は異なる\n");

	return 0;
}
