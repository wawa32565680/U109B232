/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第11題)
*/
#include <stdio.h>
#include <stdlib.h>

int is_prime(int num){
	int i;
	for (i = 2 ; i < num ; i++)
		if (num % i == 0)
			break;
	return (i == num);
}

int main() {
	int n, i;
	printf("請輸入n值:");
	scanf("%d", &n);
	for (i = n - 1 ; i >= 2 ; i--){
		if (is_prime(i)){
			printf("%d", i);
			break;
		}
	}
	return 0;
}

