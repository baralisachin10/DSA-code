// coding factorial number using recursion

#include<stdio.h>
#include<conio.h>

int fact(int n) {
	if(n==0) {
		return 1;
	}
	else {
		return fact(n-1) * n;
	}
}

int main() {
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int var = fact(num);
	printf("The factorial of the number is: %d",var);
	return 0;
}
