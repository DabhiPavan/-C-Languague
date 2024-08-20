#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter first value");
	scanf("%d",&i);
	printf("enter second value");
	scanf("%d",&j);
	printf("first value is %d \n",i);
	printf("second value is %d \n",j);
	k=i;
	i=j;
	j=k;
	printf("first swaped value = %d \n",i);
	printf("second swaped value = %d ",j);
	return 0;
}
