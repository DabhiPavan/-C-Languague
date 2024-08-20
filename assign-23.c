#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter 2 numbers");
	scanf("%d %d",&no1,&no2);
	printf("\n before swapping no1 is %d and no2 is %d",no1,no2);
	no1=no1*no2;
	no2=no1/no2;
	no1=no1/no2;
	printf("after swapping numbers = %d %d",no1,no2);
	

	return 0;
}
