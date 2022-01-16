#include<stdio.h>
int main(void){
	double a, b, h;

	printf("台形の上底を入力：");
	scanf("%lf", &a);
	printf("台形の下底を入力：");
	scanf("%lf", &b);
	printf("台形の高さを入力：");
	scanf("%lf", &h);

	printf("台形の面積は%lf\n", (a + b) * h / 2.0);

	return 0;
}
