/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��8�D)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	int i = 1, sum = 0;
	while (i <= 10){
		printf("%2d^2 =%3d\n", i, (int)pow(i, 2));
		sum += pow(i, 2);
		i++;
	}
	printf("sum  =%d", sum);
	return 0;
}

