/*
�Ǹ�: U109B232
�Z��: ���u�@�A
�m�W: �}����
�@�~�D��: �Ĥ@���@�~(��10�D)
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
	int num, i;
	printf("�п�J�@�Ӽ�:");
	
	scanf("%d", &num);
	for (i = 2 ; i < num ; i++){
		Sleep(1000);
		if (num % i == 0)
			break;
	}
		
	if (i == num)
		printf("%d�O���", num);
	else
		printf("%d���O���", num);
	printf("\n");
	return 0;
}


