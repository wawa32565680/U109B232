/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第22題)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, n, x, sum;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d", &x);
		sum = 0;
		for (j = 1 ; j <= x ; j++)
			sum = sum + (j + (j * 2));
		printf("%d\n", sum);
	}
}

