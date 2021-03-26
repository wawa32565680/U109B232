/*
學號: U109B232
班級: 日資工一乙
姓名: 徐辰慰
作業題次: 第一次作業(第20題)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n;
	int h[10], m[10];
	float dh, dm, dhm;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++)
		scanf("%d %d", &h[i], &m[i]);
	for (i = 0 ; i < n ; i++){
		dm = m[i] * 6.0;
		dh = (h[i] + (m[i] / 60.0)) * 30.0;
		dhm = dh - dm;
		if (dhm < 0)
			dhm = dhm + 360.0;
		printf("%.1f\n", dhm);
	}
}

