#include<stdio.h>

int main(void){
	int a;
	printf("整数を入力：");
	scanf("%d", &a);

	printf("10を足すと%dです\n", a+10);
	printf("10を引くと%dです\n", a-10);
	printf("10をかけると%dです\n", a*10);
	printf("10を割ると%dです\n", a/10);

	return 0;
}
