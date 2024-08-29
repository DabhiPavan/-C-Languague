#include<stdio.h>
int main()
{

int num[5]={1,2,3,4,5},i;

int *ptr=&num;

printf("\n Address of an array = %p",num);

for(i=0;i<5;i++)
{
	printf("\nAddress = %p",(ptr+i));
	printf("\n values = %d",*(ptr+i));
}
return 0;
}
