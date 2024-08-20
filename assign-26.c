#include<stdio.h>
int main()
{ 
	float Fahrenheit, Celsius;
	printf("enter fahrenheit");
	scanf("%f",&Fahrenheit);
	Celsius = ((Fahrenheit-32)*5)/9;
	printf("\n\n Temperature in Celsius is : %f",Celsius);
	return 0;
}
