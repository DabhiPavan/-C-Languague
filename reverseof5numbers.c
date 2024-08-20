#include<stdio.h>
int main()
{
	int i,num[5];
	for(i=1;i<=5;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&num[i]);
	}
	for(i=5;i>0;i--)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
