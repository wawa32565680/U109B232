/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��22�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, n, x, sum;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d", &x);
		sum = 0;
		for (j = 1 ; j <= x ; j++)
			sum = sum + (j + (j * 2));
		printf("%d\n", sum);
	}
}

