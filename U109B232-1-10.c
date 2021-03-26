/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第10題)
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
	int num, i;
	printf("請輸入一個數:");
	
	scanf("%d", &num);
	for (i = 2 ; i < num ; i++){
		Sleep(1000);
		if (num % i == 0)
			break;
	}
		
	if (i == num)
		printf("%d是質數", num);
	else
		printf("%d不是質數", num);
	printf("\n");
	return 0;
}


