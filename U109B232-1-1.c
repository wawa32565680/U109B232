/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��1�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, sum = 0;;
	for (i = 1 ; i <= 100 ; i++)
		if (i % 3 == 0 && i % 8 == 0)
			sum += i;
	printf("�i�P�ɳQ3�M8�㰣�����`�M�� %d\n", sum);
	return 0;
}

