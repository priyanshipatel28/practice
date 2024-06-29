//Modify the code to accept two user-entered numbers, add them, and print the sum.
#include<stdio.h>
int main()
{
	int num1, num2, sum;
//add	
	printf("\nenter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	
	sum = num1+num2;
	printf("sum : %d", sum);
	printf("\n");
//sub
	int num3, num4, sub;
	printf("\nenter num3:");
	scanf("%d",&num3);
	printf("enter num4:");
	scanf("%d",&num4);
	
	sub = num3-num4;
	printf("sub : %d", sub);
	printf("\n");
	
//mul	
	float f1,f2,f3,f4, mul,div;
	
	printf("\nenter f1:");
	scanf("%f",&f1);
	printf("enter f2:");
	scanf("%f",&f2);
	
	mul = f1*f2;
	printf("mul : %.2f", mul);
	printf("\n");
//div
	
	printf("\nenter f3:");
	scanf("%f", &f3);
	printf("enter f4:");
	scanf("\n%f", &f4);
	
	div = f3/f4;
	printf("div : %f", div);
	

	
	

}


