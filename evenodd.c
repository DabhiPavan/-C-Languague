#include<stdio.h>
int main()
{
	int num[100],odd[100],even[100];
	int size,i,j=0,k=0,cnto=0,cnte=0,sum=0;
	
	printf("\nEnter the size of array= ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(num[i]%2==0)
		{
			even[j] = num[i];
			j++;
			cnte++;
		}
		else
		{
			odd[k] = num[i];
			k++;
			cnto++;
		}
		
		sum = sum + num[i];
	}
	
	printf("\nArray of Odd numbers = ");
	
	for(i=0;i<cnto;i++)
	{
		printf("%d ",odd[i]);
	}
	printf("\nCount of Odd numbers = %d",cnto);
	
	printf("\nArray of Even numbers = ");
	
	for(i=0;i<cnte;i++)
	{
		printf("%d ",even[i]);
	}
	printf("\nCount of Even numbers = %d",cnte);
	printf("\nSum of all the elements = %d",sum);
	
	return 0;
}
