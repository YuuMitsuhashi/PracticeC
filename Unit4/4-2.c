#include<stdio.h>

int main(void){
	int a, b;
	int no, lower, upper;
	int sum = 0;
	printf("整数A：");
	scanf("%d", &a);
	printf("整数B：");
	scanf("%d", &b);

	if(a > b){
		lower = b;
		upper = a;
	} else {
		lower = a;
		upper = b;
	}

	no = lower;
	do {
		sum = sum + no;
		no = no + 1;
	} while (no <= upper);

	printf("%d以上%d以下の全整数の和は%dです\n", lower, upper, sum);

	return 0;
}
