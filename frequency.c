#include<stdio.h>
int main()
{
	int f[100],num[100],i,size,j,count;
	printf("enter size of array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nenter num[%d]: ",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(num[i]==num[j])
			{
				count++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=count;
		}
	}
	for(i=0;i<size;i++)
	{
		if(f[i]!=0)
		{
			printf("\n%d occurs %d times",num[i],f[i]);
		}
	}
	return 0;
}
