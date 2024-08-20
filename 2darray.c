#include<stdio.h>
int main()
{
	int i,j,a[100][100],row,col;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	printf("Enter number of columns: ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("Enter element for (%d %d) ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
