#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len=0,i,j,flag=0;
	printf("enter a string: ");
	gets(str);
	strrev(str);
	printf("string reverse = %s\n",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=0,j=len-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	{
		printf("string is pallindrom");
	}
	else
	{
		printf("string is not pallindrom");
	}
return 0;
}
