//Write a program to calculate add, sub,mul, div with num1 and num2.

#include<stdio.h>
int main()
{
	
	int num1, num2, sum, sub, mul,div,mol;
	
	printf("\n Print num1 :");
	scanf("\n%d",&num1);
	printf("\n Print num2 : ");
	scanf("\n%d",&num2);
	
	sum = num1+num2;
	printf("\n sum:%d", sum);
	sub = num1-num2;
	printf("\n sub:%d", sub);
	mul = num1*num2;
	printf("\n mul:%d", mul);
	
	return 0;
	
	
	
}
