#include<stdio.h>

void funA( int n)
{
	if(n>0)
	{
		printf("%d\t",n);
		funB(n-1);
	}
}

void funB( int n)
{
	if(n>1)
	{
		printf("%d\t",n);
		funA(n/2);
	}
}

int main()
{
	int n = 20;
	funA(n);
	return 0;
}
