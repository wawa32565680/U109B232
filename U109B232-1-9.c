/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第9題)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 1, sum = 0;
	do
		sum += n++;
	while (sum < 1000);
	printf("n = %d", n - 1);
	return 0;
}

