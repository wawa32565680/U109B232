/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��5�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, s;
	printf("�����Ʀ�: ");
	for (i = 1 ; i <= 1000 ; i++){
		s = 0;
		for (j = 1 ; j < i ; j++){
			if (i % j == 0)
				s += j;
		}
		if (i == s)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}

