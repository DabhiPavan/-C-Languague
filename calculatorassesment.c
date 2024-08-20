//WITH ARGUMENT AND WITH RETYRN TYPE FUNCTION
#include<stdio.h>
int add(int n1,int n2);
int sub(int n1,int n2);
int multi(int n1,int n2);
int div(int n1,int n2);
int main(){
	int choice,num1,num2,ans;
	printf("----MENU----\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("enter the choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter first number: ");
			scanf("%d",&num1);
			printf("enter second number: ");
			scanf("%d",&num2);
			ans=add(num1,num2);
			printf("addition of %d and %d = %d",num1,num2,ans);
		break;
		case 2:
			printf("enter first number: ");
			scanf("%d",&num1);
			printf("enter second number: ");
			scanf("%d",&num2);
			ans=sub(num1,num2);
			printf("Subtraction of %d and %d = %d",num1,num2,ans);
		break;
		case 3:
			printf("enter first number: ");
			scanf("%d",&num1);
			printf("enter second number: ");
			scanf("%d",&num2);
			ans=multi(num1,num2);
			printf("Multiplication of %d and %d = %d",num1,num2,ans);
		break;
		case 4:
			printf("enter first number: ");
			scanf("%d",&num1);
			printf("enter second number: ");
			scanf("%d",&num2);
			ans=div(num1,num2);
			printf("division of %d and %d = %d",num1,num2,ans);
		break;
		default:
			printf("Enter a valide choice!!!");
	}
	
	return 0;
}
int add(int n1,int n2){
	int ans;
ans=n1+n2;
return ans;
}
int sub(int n1,int n2){
	int ans;
ans=n1-n2;
return ans;
}
int multi(int n1,int n2){
	int ans;
ans=n1*n2;
return ans;
}
int div(int n1,int n2){
	int ans;
ans=n1/n2;
return ans;
}

