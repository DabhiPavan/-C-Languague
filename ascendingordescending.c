#include<stdio.h>
int main()
{
	int num[5],i,j,a,choice;
	printf("1.Ascenging\n");
	printf("2.Descending\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<5;i++)
	{
		printf("enter number: ");
		scanf("%d",&num[i]);
	}
	
	for (i = 0; i < 5; ++i){
   		for (j = i + 1; j < 5; ++j){
      		if (num[i] > num[j]){
         		a = num[i];
         		num[i] = num[j];
         		num[j] = a;
      		}
   		}
	}
		printf("The numbers in ascending order is: ");
    for (i = 0; i < 5; ++i){
      printf("%d", num[i]);
	}
		break;
		case 2:
			for(i=0;i<5;i++)
	{
		printf("enter number: ");
		scanf("%d",&num[i]);
	}
	
	for (i = 0; i < 5; ++i){
   		for (j = i + 1; j < 5; ++j){
      		if (num[i] > num[j]){
         		a = num[i];
         		num[i] = num[j];
         		num[j] = a;
      		}
   		}
	}
		printf("The numbers in descending order is: ");
    for (i = 4; i >= 0; --i){
      printf("%d", num[i]);
	}
		break;
		default:
			printf("Enter a valid choice!!");
	}
	return 0;
}
