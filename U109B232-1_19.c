/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��19�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n, j;
	int x[10], bit[10], ct;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++)
		scanf("%d", &x[i]);
	for (i = 0 ; i < n ; i++){
		ct = 0;
		for (j = 0 ; x[i] > 0 ; j++){
			if (x[i] % 2 == 1){
				bit[ct] = j;
				ct++;
			}
			x[i] /= 2;
		}
		printf("%d {", ct);
		for (j = 0 ; j < ct ; j++){
			if (j + 1 < ct)
				printf("%d ", bit[j]);
			else
				printf("%d}\n", bit[j]);
		}
	}
}

