/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��2�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	for (i = 1 ; i <= 100 ; i++)
		if (i % 7 == 0 && i % 3 == 0)
			printf("%d ", i);
	return 0;
}

