// program for calling phase recursion or tail recursion
#include<stdio.h>

int fun1(int n)
{
	if(n > 0) //base condition
	{
	printf("%d ",n);
	fun1(n-1);	  // Recursive function
	}
	return 0;
}

int main()
{
	int x = 3;
	fun1(x);
	return 0;
}
