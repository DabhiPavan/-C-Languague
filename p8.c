/*
A
B C
D E F
G H I J
K L M N O
*/
#include<stdio.h>
int main(){
	int row,i,k,c;
	char j='A';
	printf("enter rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(c=1;c<=i;c++)
		{
			printf("%c",j);
			j++;
		}
		printf("\n");
	}
	return 0;
}
