#include<stdio.h>
#include<stdlib.h>

//structure of an given array
struct Array {
	int *A; 
	int size;
	int length;
};

void display(struct Array arr)
{
	int i;
	printf("Elements are: \n");
	for(i = 0; i<arr.length; i++)
		printf("%d\t",arr.A[i]);
}

int main()
{
	struct Array arr;
	int n, i;
	
//	taking the size of an array as input
	printf("Enter the size of an array\n");
	scanf("%d",&arr.size);
	
//	declaring the array on heap
	arr.A = (int *)malloc(arr.size*sizeof(int));
	
//	length of array
	arr.length = 0;
	
	printf("Enter the number of numbers: ");
	scanf("%d",&n);
	
	printf("Enter the Element:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr.A[i]);
	
	arr.length = n;
	
//	To display the array elements
	display(arr);
	
	return 0;
}
