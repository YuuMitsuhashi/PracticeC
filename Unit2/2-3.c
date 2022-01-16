#include<stdio.h>

int main(void){
	int x, y;
	printf("整数xを入力：");
	scanf("%d", &x);
	printf("整数yを入力：");
	scanf("%d", &y);

	printf("xの値はyの値の%d％\n", 100 * x / y);

	return 0;
}
