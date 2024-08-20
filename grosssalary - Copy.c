#include<stdio.h>
int main()
{
int b_salary,hra,da,f_salary,in_hand;
printf("enter basic salary: ");
scanf("%d",&b_salary);
if(b_salary<=10000){
	f_salary=b_salary*0.20*0.80;
	in_hand=b_salary+f_salary;
	printf("gross salary = %d",in_hand);
}	
else if(b_salary>10000 && b_salary<=20000){
	f_salary=b_salary*0.25*0.90;
	in_hand=b_salary+f_salary;
	printf("gross salary = %d",in_hand);
}	
else{
	f_salary=b_salary*0.30*0.95;
	in_hand=b_salary+f_salary;
	printf("gross salary = %d",in_hand);
}	
	return 0;
}
