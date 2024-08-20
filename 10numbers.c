#include<stdio.h>
int main()
{
	int i,j,even=0,odd=0,sumo=0,sume=0;
	for(j=0;j<10;j++){
		printf("enter a number: ");
		scanf("%d",&i);
		if(i%2==0){
			even++;
			sume=sume+i;
		}
		else
		{
			odd++;
			sumo=sumo+i;
		}
	}
	printf("even numbers= %d\n",even);
	printf("odd numbers= %d\n",odd);
	printf("sum of even numbers= %d\n",sume);
	printf("sum of odd numbers= %d",sumo);
	return 0;
}
