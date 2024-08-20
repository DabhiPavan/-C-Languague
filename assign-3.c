#include<stdio.h>
int main()
{
	int n,a,b,pi=3.17;
	printf("Area And Circumference of Circle \n");
	printf("enter radius ");
	scanf("%d",&n);
	a=pi*n*n;
	b=2*pi*n;
	printf("Area of the circle is %d \n",a);
	printf("circumference of circle is %d",b);
	return 0;
}
