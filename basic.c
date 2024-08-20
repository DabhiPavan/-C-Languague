#include<stdio.h>
int main()
{
	int arr[100],i;
	for(i=0;i<5;i++){
		printf("\nenter the element in arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
