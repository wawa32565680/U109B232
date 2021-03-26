/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第14題)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i, x;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d", &x);
		if (x >= 1000)
			x *= 0.8;
		printf("%d\n", x);
	}
}

