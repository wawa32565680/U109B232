/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��14�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i, x;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d", &x);
		if (x >= 1000)
			x *= 0.8;
		printf("%d\n", x);
	}
}

