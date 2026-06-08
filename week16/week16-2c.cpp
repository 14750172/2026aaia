// week16-2c.cpp SOIT106_ADVANCE_012
#include <stdio.h>
int main()
{
	int a[20];
	int N=0;
	for (int i=0; i<20; i++){
		scanf("%d", &a[i] );
		if (a[i]==0) break;
		N++;
	}
	int n, s=0;
	scanf("%d",&n);
	for (int i=0; i<N; i++){
		if (a[i]==n) s++;
	}
	printf("%d\n",s);
}
