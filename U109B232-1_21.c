/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��21�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, n, x, a;
	float sum;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d", &a);
		sum = 0;
		x = 1;
		for (j = 1 ; j <= a ; j++){
			sum = sum + (1.0 / j) * x;
			x *= -1;
		}
		printf("%f\n", sum);
	}
}

