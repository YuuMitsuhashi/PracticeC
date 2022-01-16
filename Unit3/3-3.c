#include<stdio.h>

int main(void){
	int n;

	printf("整数を入力：");
	scanf("%d",&n);

	if(n == 0)
		puts("その数は0\n");
	else if(n < 0)
		puts("その数は負\n");
	else if(n > 0)
		puts("その数は正\n");

	return 0;
}
