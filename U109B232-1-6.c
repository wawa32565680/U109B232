/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��6�D)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int armstrong(int num){
	return pow(num / 100, 3) + pow((num % 100) / 10,3) + pow(num % 10,3);
}

int main() {
	int i;
	printf("Armstrong�Ʀ�:");
	for (i = 100 ; i < 1000 ; i++)
		if (i == armstrong(i))
			printf("%d ", i);
	return 0;
}

