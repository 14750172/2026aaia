// week16-3c.cpp SOIT108_Advance_004
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int s = 0;
	for (int i=1; i<=N; i++) {
		s += i*11;
	}
	printf("%d", s);
}
