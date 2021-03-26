/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第7題)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	float l = 3000;
	int day = 0;
	while (l >= 5){
		l /= 2.0;
		day++;
	}
	printf("day = %d", day);
	return 0;
}

