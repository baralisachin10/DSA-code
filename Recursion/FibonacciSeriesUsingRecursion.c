// program to fine the fibonacci series

#include<stdio.h>

int fib(int n)
{
	if(n<=1)
		return n;
	else
		return (fib(n-2)+fib(n-1));
}

int main() 
{
	int n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("The fibonacci series is: \n");
	for (i =0 ; i < n ; i++ )
	{
		int f = fib(i);
		printf("%d\t",f);
	}
	return 0;
}
