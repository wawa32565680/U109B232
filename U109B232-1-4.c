/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��4�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n;
	float sum = 0;
	printf("�п�J�@�Ӽ�:");
	scanf("%d", &n);
	for (i = 1 ; i <= n ; i++){
		sum += (1.0 / i);
	}
	printf("sum = %f", sum);
	return 0;
}

