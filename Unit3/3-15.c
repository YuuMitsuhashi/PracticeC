#include<stdio.h>

int main(void){
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	switch(no%2){
		case 0 : puts("その数は偶数\n"); //ラベル(条件式は整数限定)
			 break;
		case 1 : puts("その数は奇数\n");
			 break;
	}
	return 0;
}
