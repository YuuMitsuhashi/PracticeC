#include<stdio.h>
int main(void){
	double height, weight;

	printf("身長を入力：");
	scanf("%lf", &height);
	printf("体重を入力：");
	scanf("%lf", &weight);

	printf("BMIは%.2f\n", weight / ((height / 100) * (height / 100)));

	return 0;
}
