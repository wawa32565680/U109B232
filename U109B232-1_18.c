/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��18�D)
*/
#include <stdio.h>
#include <stdlib.h>
int daob(int num){
	int sum = 0;
	while (num > 0){
		sum = (sum * 2) + num % 2;
		num /= 2;
	}
	return sum;
}
int main(){
	int i, n, x[10];
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++)
		scanf("%d", &x[i]);
	for (i = 0 ; i < n ; i++)
		printf("%d ", daob(x[i]));
}

