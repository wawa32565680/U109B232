/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��23�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, n, x;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d", &x);
		for (j = 1 ; j <= x ; j++)
			if (x % j == 0)
				printf("%d ", j);
		printf("\n");
	}
}

