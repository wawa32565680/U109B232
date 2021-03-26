/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第2題)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	for (i = 1 ; i <= 100 ; i++)
		if (i % 7 == 0 && i % 3 == 0)
			printf("%d ", i);
	return 0;
}

