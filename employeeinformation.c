#include<stdio.h>
struct employee
{
	int number[10];
	char name[20];
	char address[50];
	int age[2];
}e[5];
int main()
{
	struct employee;
	char nme[50];
	int i;
	for (i=0;i<5;i++)
	{
		printf("\nEnter details for employee %d",i);
		printf("\nEnter your name: ");
//		scanf("%s",e[i].name);
		gets(nme);
		e[i].name = nme;
		printf("\nEnter your number: ");
		scanf("%d",&e[i].number);
		printf("\nEnter your address: ");
		scanf("%s",e[i].address);
//		gets(e[i].address);
		printf("\nEnter your age: ");
		scanf("%d",&e[i].age);
	}
	
	for (i=0;i<5;i++)
	{
		printf("\nDetails of employees");
		printf("\nName: %s",e[i].name);
		printf("\nNumber: %d",e[i].number);
		printf("\nAddress: %s",e[i].address);
		printf("\nAge: %d",e[i].age);
	}
	return 0;
}
