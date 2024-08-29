/*
*
* *
* * *
* * * *
* * * * *
* * * * 
* * * 
* *
*
*/
#include<stdio.h>
int main(){
	int row,j,i;
	printf("enter rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	
		for(j<=row;j=1;j--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
