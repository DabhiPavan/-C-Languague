#include<stdio.h>
union data
{
	int num;
	char ch;
};
int main()
{
	union data d1;
	d1.num = 65;
	d1.ch = 'A';
	printf("value of num = %d\n",d1.num);
	printf("value of ch = %c",d1.ch);	
	return 0;
}
