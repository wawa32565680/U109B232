/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��11�D)
*/
#include <stdio.h>
#include <stdlib.h>

int is_prime(int num){
	int i;
	for (i = 2 ; i < num ; i++)
		if (num % i == 0)
			break;
	return (i == num);
}

int main() {
	int n, i;
	printf("�п�Jn��:");
	scanf("%d", &n);
	for (i = n - 1 ; i >= 2 ; i--){
		if (is_prime(i)){
			printf("%d", i);
			break;
		}
	}
	return 0;
}

