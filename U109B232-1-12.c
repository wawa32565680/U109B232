/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��12�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i = 0;
	while(!(i % 3 == 1 && i % 5 == 3 && i % 7 == 2))
		i++;
	printf("%d���ߤl\n", i);
	return 0;
}

