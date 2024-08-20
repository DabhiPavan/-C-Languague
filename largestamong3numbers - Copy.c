#include<stdio.h>
int main(){
	int i,j,k;
	printf("enter 3 numbers: ");
	scanf("%d %d %d",&i, &j, &k);
	if(i>j){
		if(i>k)
		printf("%d is greatest",i);
		else
		printf("%d is greatest ",k);
	}
	else
	printf("%d is greatest",j);
	return 0;
}
