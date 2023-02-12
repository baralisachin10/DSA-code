//Program to find the sum of N natural numbers using recursion
#include<stdio.h>

int sum(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return sum(n-1) + n;
	}
}
int main() {
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("%d\t",sum(num));
	return 0;
}
