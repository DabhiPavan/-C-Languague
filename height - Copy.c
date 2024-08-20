#include<stdio.h>
int main()
{
	float i;
	printf("enter height in cm ");
	scanf("%f",&i);
	if(i<130)
	printf("short");
	else if(i>130 && i<145)
	printf("normal");
	else
	printf("high");
	return 0;
}
