/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第18題)
*/
#include <stdio.h>
#include <stdlib.h>
int daob(int num){
	int sum = 0;
	while (num > 0){
		sum = (sum * 2) + num % 2;
		num /= 2;
	}
	return sum;
}
int main(){
	int i, n, x[10];
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++)
		scanf("%d", &x[i]);
	for (i = 0 ; i < n ; i++)
		printf("%d ", daob(x[i]));
}

