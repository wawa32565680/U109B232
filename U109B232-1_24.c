/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第24題)
*/
#include <stdio.h>
#include <stdlib.h>
int is_prime(int num){
	int i, sum = 0;
	for (i = 1 ; i < num ; i++){
		if (num % i == 0)
			sum += i;
	}
	return (num == sum);
}
int main(){
	int x;
	do{
		scanf("%d", &x);
		if (x == 0)
			break;
		if (is_prime(x))
			printf("Yes, it's a perfect number!\n");
		else
			printf("No, it isn't a perfect number!\n");
	} while (1);
}

