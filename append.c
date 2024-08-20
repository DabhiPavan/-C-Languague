#include<stdio.h>
int main()
{
	FILE *f1;
	f1 = fopen("apen.txt","a");
	fprintf(f1,"THIS IS MY THIRD FILE\n");
	fclose(f1);
	return 0;
}
// append does not overwrite like writw mode it prints with changes done
