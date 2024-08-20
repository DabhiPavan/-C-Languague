#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],row,col,sum[100][100],size,i,j,choice,k;
	printf("1.addition\n");
	printf("2.subtraction\n");
	printf("3.division\n");
	printf("4.multiplication\n");
	printf("enter choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
	printf("enter number of rows: ");
	scanf("%d",&row);
	printf("enter number of columns: ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elemnts of a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elemnts of b[%d][%d] ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
		break;
		case 2:
				printf("enter number of rows: ");
	scanf("%d",&row);
	printf("enter number of columns: ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elemnts of a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elemnts of b[%d][%d] ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
		break;
		case 3:
				printf("enter number of rows: ");
	scanf("%d",&row);
	printf("enter number of columns: ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elemnts of a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elemnts of b[%d][%d] ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=a[i][j]/b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");	
	}
		break;
		case 4:
				printf("enter number of rows: ");
	scanf("%d",&row);
	printf("enter number of columns: ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elemnts of a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elemnts of b[%d][%d] ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=0;
			for(k=0;k<col;k++)
			{
				sum[i][j]=sum[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");	
	}
		break;
		default:
			printf("Enter a valide choice!!!");
		}
	
	return 0;
}
