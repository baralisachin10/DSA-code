// program for Returning phase or head recursion
#include<stdio.h>

int fun1(int n)
{
	if(n > 0) //base condition
	{
		fun1(n-1);	  // Recursive function
		printf("%d ",n);
	}
	return 0;
}

int main()
{
	int x = 3;
	fun1(x);
	return 0;
}
