#include<stdio.h>
int main(void){
	double x, y;

	puts("2つの実数を入力");
	printf("実数x:");
	scanf("%lf", &x);
	printf("実数y:");
	scanf("%lf", &y);
	
	printf("aの値はbの%lf％\n", 100 * x / y);

	return 0 ;
}
