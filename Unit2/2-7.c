#include<stdio.h>
int main(void){
	double x,S;

	printf("円の面積を求めるための半径を入力：");
	scanf("%lf", &x);

	S = 3.141592 * x;

	printf("円の面積は%lf\n", S);

	return 0;
}


