/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第6題)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int armstrong(int num){
	return pow(num / 100, 3) + pow((num % 100) / 10,3) + pow(num % 10,3);
}

int main() {
	int i;
	printf("Armstrong數有:");
	for (i = 100 ; i < 1000 ; i++)
		if (i == armstrong(i))
			printf("%d ", i);
	return 0;
}

