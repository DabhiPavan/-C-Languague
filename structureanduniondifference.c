#include<stdio.h>

struct Structure
{
	int num;
	char grade;
}s;

union unio
{
	int age;
	char ch;
}u;

int main()
{
	struct Structure;
	union unio;
	printf("Enter a number ");
	scanf("%d",&s.num);
	printf("Enter grade ");
	scanf("%c",&s.grade);
	
	printf("Enter a age ");
	scanf("%d",&u.age);
	printf("Enter a character ");
	scanf("%c",&u.ch);
	
	printf("%d",s.num);
	printf("%c",s.grade);
	printf("%d",u.age);
	printf("%c",u.ch);
	return 0;
}
