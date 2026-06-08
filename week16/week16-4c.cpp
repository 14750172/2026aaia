// week16-4c.cpp SOIT106_ADVANCE_005_C
#include <stdio.h>
int MYPOWER (int a, int b)
{
	int s = 1;
	for (int i=0; i<b; i++) s*= a;
	return s;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
