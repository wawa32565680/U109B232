/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第12題)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i = 0;
	while(!(i % 3 == 1 && i % 5 == 3 && i % 7 == 2))
		i++;
	printf("%d隻兔子\n", i);
	return 0;
}

