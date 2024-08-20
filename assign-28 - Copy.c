#include<stdio.h>
int main()
{
	int year,days,month;
	printf("enter year");
	scanf("%d",&year);
	days=year*365;
	month=days/30;
	printf(" %d month and %d days",month,days); 
	return 0;
}
