//program to increase the size of an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p, *q;
	int i;
	p = (int *)malloc(5 * sizeof(int));
	p[0] = 3; p[1] = 4; p[2] = 5; p[3] = 10; p[4] = 15; 
	
	q = (int *)malloc(10 * sizeof(int));
	
//	Array of pointer p is copied to array of pointer q
	for(i = 0; i< 5; i++)
		q[i] = p[i];
	
//	memory deallocated for pointer p
	free(p);
	
//	p is pointing on the queue	
	p = q;
	
//	q pointer is made as Null
	q = NULL;
	
	p[5] = 16; p[6] = 17; p[7] = 18; p[8] = 19; p[9] = 20; 
	
	for(i = 0; i < 10; i++)
		printf("%d\n",p[i]);
	return 0;
}
