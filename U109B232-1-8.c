/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第8題)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	int i = 1, sum = 0;
	while (i <= 10){
		printf("%2d^2 =%3d\n", i, (int)pow(i, 2));
		sum += pow(i, 2);
		i++;
	}
	printf("sum  =%d", sum);
	return 0;
}

