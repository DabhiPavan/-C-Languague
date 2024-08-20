#include<stdio.h>
int main()
{
	int num[100],i,size,j,count;
	printf("enter size of array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nenter num[%d]: ",i);
		scanf("%d",&num[i]);
	}
	for (i=0;i<size;i++)
	{
		count=0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(num[i]==num[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			printf("%d",num[i]);
		}
	}
	return 0;
}
