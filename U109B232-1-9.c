/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��9�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 1, sum = 0;
	do
		sum += n++;
	while (sum < 1000);
	printf("n = %d", n - 1);
	return 0;
}

