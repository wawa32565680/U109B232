/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��17�D)
*/
#include <stdio.h>
#include <stdlib.h>
int dao(int num){
	int sum = 0;
	while (num > 0){
		sum = (sum * 10) + num % 10;
		num /= 10;
	}
	return sum;
}
int main(){
	int x;
	do{
		scanf("%d", &x);
		if (x == 0)
			break;
		printf("%d ", dao(x));
	} while (1);
}

