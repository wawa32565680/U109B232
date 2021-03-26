/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第21題)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, n, x, a;
	float sum;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d", &a);
		sum = 0;
		x = 1;
		for (j = 1 ; j <= a ; j++){
			sum = sum + (1.0 / j) * x;
			x *= -1;
		}
		printf("%f\n", sum);
	}
}

