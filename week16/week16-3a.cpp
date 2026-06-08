// week16-3a.cpp SOIT108_Advance_001
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	scanf("%d",&N);
	int s=0;
	for (int i=0; i<=1000; i++){
		if (i*i == N) s=i;
	}
	printf("%d",s);
}
