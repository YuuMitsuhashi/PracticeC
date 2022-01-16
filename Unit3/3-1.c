#include<stdio.h>

int main(void){
	int no;

	printf("整数を入力：");
	scanf("%d", &no);

	if(no % 10)
		puts("10の倍数ではありません\n");

	return 0;
}
