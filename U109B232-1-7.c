/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��7�D)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	float l = 3000;
	int day = 0;
	while (l >= 5){
		l /= 2.0;
		day++;
	}
	printf("day = %d", day);
	return 0;
}

