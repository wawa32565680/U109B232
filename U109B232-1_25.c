/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��25�D)
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
int main(){
	int x;
	do{
		scanf("%d", &x);
		if (x == 0)
			break;
		if (is_prime(x))
			printf("Yes, it's a prime number!\n");
		else
			printf("No, it isn't a prime number!\n");
	} while (1);
}

