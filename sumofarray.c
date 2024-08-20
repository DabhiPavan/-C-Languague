#include<stdio.h>
int main()
{
	int sum=0,i,num[5];
		
	for(i=1;i<=5;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=1;i<=5;i++)
	{
		sum=sum+num[i];
	}
	
	printf("Sum of array is %d",sum);
	return 0;
}
