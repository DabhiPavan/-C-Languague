#include<stdio.h>
int main()
{
	FILE *f1;
	char data[100];
	f1 = fopen("FILES.txt","r");
	while(fgets(data,100,f1))
	{
		printf("%s",data);
	}
	return 0;
}
