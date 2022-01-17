#include<stdio.h>

int main(void){
	int retry;

	do{
		int no;

		printf("整数を入力してください：");
		scanf("%d", &no);

		if(no == 0)
			puts("その数は0です\n");
		else if(no > 0)
			puts("その数は正です\n");
		else if(no < 0)
			puts("その数は負です\n");

		printf("retry?  [yes,,,0/no...9] :\n");
		scanf("%d", &retry);
	}while(retry == 0);

	return 0;
}
