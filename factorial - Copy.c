#include<stdio.h>
int main()
{
	int ans=1,i,num;
	printf("enter a number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		ans=ans*i;
		}
	printf("factorial is: %d",ans);
	return 0;
}
