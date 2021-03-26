/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第1題)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, sum = 0;;
	for (i = 1 ; i <= 100 ; i++)
		if (i % 3 == 0 && i % 8 == 0)
			sum += i;
	printf("可同時被3和8整除的數總和為 %d\n", sum);
	return 0;
}

