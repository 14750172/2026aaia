// week16-4b.cpp SOIT108_Advance_014
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int s = 0;
	for (int i=0; i<=N; i++){
		s += 2*i + 1;
	}
	printf("f(%d)=%d", N, s);
}
