#include<stdio.h>
int main()
{
	float hour,minutes,seconds;
	printf("enter minutes");
	scanf("%f",&minutes);
	hour=minutes/60;
	seconds=hour*3600;
	printf(" %f hours and %f minutes",hour,seconds); 
	return 0;
}
