/* 
#---->preprocessors
include----> directive( this is like a folder)
stdio.h-----> standard input output header file (already functions are writtin in studio.h file and we are using it}
int main()----> work is to execute the code taht is written in it.
main is a funtion.( taht i have created)
printf("")----> it will print the data that is present in the printf. ( 
(printf is also a function in stdio.h)
return0----> value refer by the main function
\n-----> to go to next line( whenevr i write /n then it will go to next line)
\t----->it will put space  between the sentance
variable( to giev the name to the value, for that we will add datatype of the value.  like num4 = 40 means i have given a anme to 40 value that is num4.

all of this is formatting , so that compiler can idebtify. which data type i have to print.

int   ------> "%d" or "%i"  ( "%" i van use it but i don't have to use it)

long int----->"%ld"
float---->"%f"
double---->"%lf"
char----> "%c"
*/


#include<stdio.h>
int main()
{
	int num1=10, num2=50, num3=60;
	char hi='P', hk='r';
	float f1=12.8;
	
	
	printf("hello priyanshi");
	printf("it is start");
	printf("\n%d",num2);
	printf("\n%c",hi);
	printf("\n%f",12.8);    //\n%.3f-----> float limit is .3 to a decimal
	return 0;
}









