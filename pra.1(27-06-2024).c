#include<stdio.h> // #-->preprocessor, include---> directory, studio.h---> header files in c language
// there are many header files in c langauge like stdlib.h, math.h, string.h, assert.h, time.h, limits.h and much more
int main()
{
	
	int num1=100, num2=200, num3=500; // using ';' is compalsary because it is a syntax
	char ch1= 'charlie', ch2='david'; 
	char ch3='p', ch4 ='r';
	char name='P';
	 // here the char will only print one alphabet from the value given in it,
	// i have written charlie for this, the output will be "e" only, because it will only print one character. 
	float f1=89.67, f2=70.96;
	printf("hy, again practice time!");
	printf("\n you got 100/500: %d",num1);
	printf("\n you got higher 200/500: %d", num2);
	printf("\n you got full marks: %d", num3);
	printf("\n charlie last letter is :@hgjyu %c", ch1);
	printf("\n david name will be written as in char: %c", ch2);
	printf("\n %c", ch3);
	printf("\n the percentage of charlie is : %f \t the percenatage of david is : %f" , f2,f1);
	printf("\n my name is : %c",name);
	
	
	return 0;
}
