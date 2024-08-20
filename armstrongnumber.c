#include<stdio.h>
#include<math.h>  
 int main()    
{    
int n,rem,copy2,power,count=0,sum=0,copy;    
printf("enter the number: ");    
scanf("%d",&n);    
copy=n;
copy2=n;    
while(n!=0)    
{    
count++;     
n=n/10;   
}    
while(copy!=0){
	rem=copy%10;
	power=pow(rem,count);
	sum=sum+power;
	copy=copy/10;
}
if(copy2==sum){
	printf("it is a armstrong number ");
}
else
printf("it is not a armstrong number ");
return 0;
}   
