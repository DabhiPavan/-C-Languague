#include<stdio.h>
int main()
{
	int n,j,i,odd=0,even=0;
	for(j=1;j<=5;j++){
		printf("enter a number: ");
		scanf("%d",&n);
	}
	printf("\neven numbers");
while(i<=n)
   {
      if(i%2==0)
      {
       printf("\n%d",i);
        even++;
      }
      i++;
   
   }
   printf("\nOdd numbers:");
   i=1;
   while(i<=n)
   {
     if(i%2==1)
     {
       printf("\n%d",i);
        odd++;
     }
     i++;
   }
   printf("\nTotal even numbers:%d",even);
   printf("\nTOtal odd numbers:%d",odd);
   return 0;
}
