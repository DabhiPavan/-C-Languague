#include<stdio.h>

struct Student
{
	int roll;
	float percentage;
	char grade;
}s[100];

int main()
{
	struct Student;
	int i,size;
	float temp;
	printf("enter the size: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter roll number of student %d ",i+1);
		scanf("%d",&s[i].roll);
		printf("\nEnter the percentage of student %d ",i+1);
		scanf("%.2f",&temp);
		s[i].percentage=temp;
		printf("\nEnter the grade of student %d ",i+1);
		scanf(" %c",&s[i].grade);
	}
	
	for(i=0;i<size;i++)
	{
	
		printf("roll number of student %d = %d",i+1,s[i].roll);
	printf("percentage of student %d = %d",i+1,s[i].percentage);
	printf("grade of student %d = %d",i+1,s[i].grade);
	}
	return 0;
}
