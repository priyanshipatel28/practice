
//static---> the value that ia already is present in it, 
//like int num1= 10;
// dynamic---> the value taht the user will give to variable(num1)   
//like int num1;
// scanf---> ("formatting" ,   )  it will store new value in your memory.

// &---> it is giving address to value , it will always in scanf.
// we are using scanf , here user will decide what to write in value.


#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("\n enter the value of num1 =  ");
	scanf("%d",&num1);
	printf("\n enter num1 value: ");
	scanf("%d",&num2);
	printf("\n enter num1 value: ");
	scanf("%d",&num3);
	
	// now i want print them.
	printf("\n%d", num3);
	printf("\n%d", num1);
	printf("\n%d", num2);
	
	// for char
	// the memory usage of char is more that's way we are using space before %c..
	char ch1, ch2, ch3;
	printf("\n enter the value of ch1 =  ");
	scanf(" %c",&ch1);
	printf("\n enter ch1 value: ");
	scanf(" %c",&ch2);
	printf("\n enter ch1 value: ");
	scanf(" %c",&ch3);
	
	// now i want print them.
	printf("\n%c", ch3);
	printf("\n%c", ch2);
	printf("\n%c", ch1);
	
	// for float
	float f1,f2,f3;
	printf("\n enter the value of f1 =  ");
	scanf(" %f",&f1);
	printf("\n enter f2 value: ");
	scanf(" %f",&f2);
	printf("\n enter f3 value: ");
	scanf(" %f",&f3);
	
	// now i want print them.
	// the value after moduletaht is %.2f, is settign a limit the value. man value is .6 for float if i want more than use double.
	printf("\n%.2f", f3);
	printf("\n%.3f", f2);
	printf("\n%.4f", f1);
	
	
	
	
}
