/*\
1
2 3
4 5 6  
7 8 9 10
*/
#include<stdio.h>
int main(){
	int row,j,i,k=1;
	printf("enter rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",k);
			k++;
	}
		printf("\n");
	}
	return 0;
}
