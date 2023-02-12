#include<stdio.h>

#include<conio.h>

void fun(int n)
{
	if(n>0) {
		printf("%d\t",n);
		fun(n-1);
		fun(n-1);
	}	
}

int main()
{
	int n = 4;
	fun(n);
	return 0;
}
