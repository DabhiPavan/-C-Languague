/*\
1
2 3
3 4 5
4 5 6 7
*/
#include<stdio.h>
int main(){
	int row,j,i,k=1;
	printf("enter rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		k=i;
		for(j=1;j<=i;j++){
			printf("%d ",k);
			k++;
	}
		printf("\n");
	}
	return 0;
}
