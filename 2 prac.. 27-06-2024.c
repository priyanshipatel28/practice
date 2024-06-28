#include<stdio.h>
int main()
{
	char name[10]="priyanshi"; //  the string is used that is formated as %s, it is a array to print my whole name.
	int age=21;
	char gender='f';
	char school[20]= "nalanda vidyalay";
	int standard=10;
	char subject[8]="science";
	float percentage=95.4;
	
	
	printf("my name is: %s",name );
	printf("\nmy age is : %d", age);
	printf("\n  my gender is : %c", gender );
	printf("\n my school name is: %s", school);
	printf("\n which class you are in? %d", standard);
	printf("\n my subject is : %s", subject );
	printf("\n my percentage in 10 class is : %f", percentage);
	return 0;
}
