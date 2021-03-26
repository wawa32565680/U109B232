/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第5題)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, s;
	printf("完美數有: ");
	for (i = 1 ; i <= 1000 ; i++){
		s = 0;
		for (j = 1 ; j < i ; j++){
			if (i % j == 0)
				s += j;
		}
		if (i == s)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}

