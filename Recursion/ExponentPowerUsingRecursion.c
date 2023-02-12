// finding the exponent power using recursion

#include<stdio.h>
#include<conio.h>

int exPow(int m , int n) {
	
	if(n == 0) {
		return 1;
	}
	else {
		return exPow(m,n-1) * m;
	}
}

int main() {
	int number , power;
	printf("Enter the number: ");
	scanf("%d",&number);
	printf("Enter the power: ");
	scanf("%d",&power);
	printf("%d ^ %d is: %d",number,power, pow(number, power));
	getch();
	return 0;
	
}
