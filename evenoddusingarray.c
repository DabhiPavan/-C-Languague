#include<stdio.h>
int main()
{
	int i,num[5];
		
	for(i=1;i<=5;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=1;i<=5;i++)
	{
		if(num[i]%2==0)
		{
		printf("%d is even number \n",num[i]);
		}
		else
		{
		printf("%d is odd number \n",num[i]);
		}
	}
	return 0;
}
