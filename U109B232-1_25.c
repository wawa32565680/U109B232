/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第25題)
*/
#include <stdio.h>
#include <stdlib.h>
int is_prime(int num){
	int i;
	for (i = 2 ; i < num ; i++)
		if (num % i == 0)
			break;
	return (i == num);
}
int main(){
	int x;
	do{
		scanf("%d", &x);
		if (x == 0)
			break;
		if (is_prime(x))
			printf("Yes, it's a prime number!\n");
		else
			printf("No, it isn't a prime number!\n");
	} while (1);
}

