/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��13�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, hour, i;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		scanf("%d", &hour);
		if (hour <= 60)
			printf("%d\n", hour * 75);
		else if (hour >= 61 && hour <= 75)
			printf("%d\n", 4500 + (int)((hour - 60) * 75 * 1.25));
		else
			printf("%d\n", 4500 + (int)(15 * 75 * 1.25) + (int)((hour - 75) * 1.75 * 75));			
	}
}

