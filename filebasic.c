#include<stdio.h>
int main()
{
	FILE *f1;
	FILE *f2,*f3;
	f1 = fopen("demo1.txt","w");
	fprintf(f1,"THIS IS MY FIRST FILE");
	fclose(f1);
	
	f2 = fopen("demo2.txt","w");
	fprintf(f2,"THIS IS MY SECOND FILE");
	fclose(f2);
	
	f3 = fopen("demo3.txt","w");
	fprintf(f3,"THIS IS MY THIRD FILE");
	fclose(f3);
	
	printf("OPERATION SUCCESSFULL");
	return 0;
}
