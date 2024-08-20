//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main()
{
    int n,i=1,j,sum=0;
    printf("Enter the range of number:");
    scanf("%d",&n);
    while(i<=n)
    {
		for(j=1;j<=i;j++){
        sum+=j;
        }
        i++;
    }
    printf("The sum of the series = %d",sum);
}
