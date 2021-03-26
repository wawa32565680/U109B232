/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第3題)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i, x = 1, sum = 0;
	for (i = 1 ; i <= 50 ; i++){
		sum = sum + (pow(i,2) * x);
		x *= -1;
	}
	printf("%d\n", sum);
	return 0;
}

