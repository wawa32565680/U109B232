/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��3�D)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i, x = 1, sum = 0;
	for (i = 1 ; i <= 50 ; i++){
		sum = sum + (pow(i,2) * x);
		x *= -1;
	}
	printf("%d\n", sum);
	return 0;
}

