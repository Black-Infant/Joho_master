//
//入力した文字列をalphabet順に表示
//
//キーボードから入力せよ
//
#include<stdio.h>

void print_num(int num){

	printf("10進数：%d\n",num);
	printf("16進数：%x\n",num);

}


int main(void){

	int num;

	printf("16進数を入力せよ:");
	scanf("%x",&num);

	print_num(num);

}

