#include<stdio.h>
int main()
{
	long int ans=1,k,i,num,j;
	printf("enter starting number: ");
	scanf("%d",&num);
	printf("enter ending number: ");
	scanf("%d",&j);
	for(i=num;i<=j;i++){
		ans=1;
		for(k=1;k<=i;k++){
		ans=ans*k;
		}
		printf("factorial of %d is: %d\n",i,ans);
		}
	
	return 0;
}
