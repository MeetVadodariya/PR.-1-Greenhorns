//Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit.

#include<stdio.h>
main()
{
	float c,f;
	printf("Enter Celsius = ");
	scanf("%f",&c);


 	f = (c * 9/5) + 32;
	printf("f= %.2f",f);
	
}