/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第15題)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, n;
	int money[10], year[10], sum[10];
	float rate[10];
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d %d %f", &money[i], &year[i], &rate[i]);
		sum[i] = 0;
	}
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < year[i] ; j++){
			sum[i] = (sum[i] + money[i]) * (1.0 + rate[i] / 100);
		}
		printf("%d\n", sum[i]);
	}
}

