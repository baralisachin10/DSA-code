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

//to append or add the element 

void append(struct Array *arr)
{
	int x;
	printf("Enter the element to append: ");
	scanf("%d",&x);
	if(arr->length<arr->size){
		arr->A[arr->length] = x;
		arr->length++;
	}
}

//function to insert the array element

void insert(struct Array *arr, int index)
{
	int x, i;
	printf("Enter the element to insert and given index: ");
	scanf("%d",&x);
	
	if(index>=0 && index<=arr->length)
	{
		for(i = arr->length; i > index; i--)
		{
			arr->A[i] = arr->A[i-1];
		}
		arr->A[index] = x;
		arr->length++;
	}
}



//main function

int main()
{
	struct Array arr;
	int n, i , index;
	
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
	
//	function call to append the array element
//	append(&arr);

//	function call to insert the array element
	printf("Enter the index to add the element: ");
	scanf("%d",&index);
	if(index< arr.size)
	{
		insert(&arr, index);	
	}
	
//	function call to display the array elements
	display(arr);
	
	return 0;
}
