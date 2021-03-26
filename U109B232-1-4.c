/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第4題)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n;
	float sum = 0;
	printf("請輸入一個數:");
	scanf("%d", &n);
	for (i = 1 ; i <= n ; i++){
		sum += (1.0 / i);
	}
	printf("sum = %f", sum);
	return 0;
}

