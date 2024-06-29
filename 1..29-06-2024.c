// C program to illustrate the basic input and output using 
// printf() and scanf() 

#include<stdio.h>
int main()
{
	int stuid;
	char name[20];
	
	printf(" \n enter the stuid: ");
	//if we are using scanf to print the value then in printf , only formatting string will pass not the---
	// arguement that is %d,%s,%c,%f...
	scanf("%d", &stuid);
	//in scanf the '&' is the address that we are giving to our value.  
	
	printf("\n enter your name: ");
	scanf(" %s", &name);
	
	
	printf("\nnum1: %d",stuid);
	printf("\nname: %s",name);
	return 0;
		
	
}
