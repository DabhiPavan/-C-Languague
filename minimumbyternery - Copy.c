#include<stdio.h>
int main(){
	int a,b,c,min;
	printf("enter 3 numbers: ");
	scanf("%d %d %d",&a, &b, &c);
	min=(a<b)?
	((a<c)?a:c):((b<c)?b:c);
	printf("minimum number is %d",min);
	return 0;
}
