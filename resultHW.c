#include<stdio.h>

struct Result{
	int Std_Id;
	char Std_Name[50];
	int Maths;
	int English;
	int Science;
	int Total;
	float Percentage;
}s[100];

int main()
{
	struct Result;
	int i,size;
	
	printf("\nEnter the size :- ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter the Student Id :- ");
		scanf("%d",&s[i].Std_Id);
		
		printf("Enter the Student Name :- ");
		getchar();
		fgets(s[i].Std_Name,sizeof(s[i].Std_Name),stdin);
//		scanf("%s",&s[i].Std_Name);
		
		printf("Enter the Marks of Maths :- ");
		scanf("%d",&s[i].Maths);
		
		printf("Enter the Marks of English :- ");
		scanf("%d",&s[i].English);
		
		printf("Enter the Marks of Science :- ");
		scanf("%d",&s[i].Science);
	}
	
	for(i=0;i<size;i++)
	{
		s[i].Total = s[i].Maths + s[i].English + s[i].Science;
        s[i].Percentage = (s[i].Total / 300.0) * 100;
	}
	
	printf("\n------------------------------------------------------------------");
	printf("\n\t\tDream Internitional School");
	printf("\n------------------------------------------------------------------");
	printf("\nStd_id   Std_name   Maths   English   Science   Total   Percentage");
//    printf("\n------------------------------------------------------------------");
	
	 for(i=0;i<size;i++) {
//        printf("\n%-8d %-10s %-7d %-9d %-9d %-7d %.2f",s[i].Std_Id,s[i].Std_Name,s[i].Maths,s[i].English,s[i].Science,s[i].Total,s[i].Percentage);
        printf("\n|   %d\t   %s\t   %d\t       %d\t    %d\t       %d/300      %.2f    |",s[i].id,s[i].name,s[i].math,s[i].sci,s[i].eng,s[i].totle,s[i].perc);
    }
}
