 /*today lecture notes
  C language 
  

#include <stdio.h>: The header file inclusion to use printf() function.
int main(): The main() function is the entry point of any C program.
printf(“Hello World”): Function to print hello world.
return 0: Value returned by the main() function.
 */
 
 //basic ouput
 // class data for student
 #include<stdio.h>
int main()
 {
 
	 int num1=10, num2=20; 
	 int sum= num1+num2;
	 int sub= num1-num2;
	 int mul= num1*num2;
	 int div= num1/num2;
	 int module= num1%num2;
	float cgpa=8.23, percentage=95.0;
	char name[7]= "shahil";
	char course[5]= "B.E."; 
	
 	printf("this is my first code");
 	printf("hello \n today our coding in c langauge has started. \t i have made two friends. ");
 	printf("\n firts number is: %d", num1);
 	printf("\n second number is: %d", num2 );
 	printf("\n new name: %s", name);
 	printf("\t course: %s", course);
 	printf("\n cgpa: %f", cgpa);
 	printf("\t percentage: %f", percentage);
 	printf("\n sum:%d", sum);
 	printf("\n subtraction: %d", sub);
 	printf("\n mul= %d",mul);
 	printf("\n div= %d",div);
 	printf("\n module= %d",module);
 	
 }

//sum function building
int add(int num1, int num2);
int add(int num1, int num2 )
{
	
	int ans;
	ans= num1+ num2;
	return ans;
}

 
 
