#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i;
//	initializing the array and memory is allocated at stack
	
	int A[5] = {2,4,6,8,10};
	
//	initializing the array and memory is allocated at heap
	
	int *p;
	p = (int *)malloc(5 * sizeof(int));
	p[0] = 1;
	p[1] = 3;
	p[2] = 5;
	p[3] = 7;
	p[4] = 9;
	
	for(i = 0; i< 5; i++)
	{
		printf("%d",A[i]);
		printf("\t");
	}
	
	printf("\n");
	
	for(i = 0; i<5; i++)
	{
		printf("%d",p[i]);
		printf("\t");
	}
	
	return 0;
}
