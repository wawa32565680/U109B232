/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第17題)
*/
#include <stdio.h>
#include <stdlib.h>
int dao(int num){
	int sum = 0;
	while (num > 0){
		sum = (sum * 10) + num % 10;
		num /= 10;
	}
	return sum;
}
int main(){
	int x;
	do{
		scanf("%d", &x);
		if (x == 0)
			break;
		printf("%d ", dao(x));
	} while (1);
}

