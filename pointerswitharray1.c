#include<stdio.h>
int main()
{
	int num[5]={1,2,3,4,5};
	printf("\nAddress of an array = %p",num);
	printf("\nAddress of first array = %p",&num[0]);
	printf("\nAddress of second array = %p",&num[1]);
	return 0;
}
