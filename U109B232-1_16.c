/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第16題)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int armstrong(int num){
	return (num == (pow(num / 100, 3) + pow((num % 100) / 10, 3) + pow(num % 10, 3)));
}
int main(){
	int x;
	do{
		scanf("%d", &x);
		if (x == 0)
			break;
		if (armstrong(x))
			printf("Yes, it's an Armstrong number!\n");
		else
			printf("No, it isn't an Armstrong number!\n");
	} while(1);
}

