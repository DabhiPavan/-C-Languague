#include<stdio.h>
int main()
{
	float id,final_amount,bill,charge,unit,after_tax;
	char name;
	//printf("enter name: ");
	//scanf("%c",&name);
	printf("enter customer ID: ");
	scanf("%f",&id);
	printf("enter unit consumed: ");
	scanf("%f",&unit);
	if(unit<350){
	charge=1.20;
	bill=charge*unit;
	printf("charge = 1.20\n");
	printf("payable amount = %f\n",bill);
}
	else if(unit>=350 && unit<600){
		charge=1.50;
	bill=charge*unit;
	printf("charge = 1.50\n");
	printf("payable amount = %f\n",bill);
	}
	
	else if(unit>=600 && unit<800){
		charge=1.80;
	bill=charge*unit;
	printf("charge = 1.80\n");
	printf("payable amount = %f\n",bill);
	}
	
	else{
		charge=2.00;
	bill=charge*unit;
	printf("charge = 2.00\n");
	printf("payable amount = %f\n",bill);
	}
	if(bill>800){
	printf("tax = 18%%\n");
	after_tax=(bill/100)*18;
	final_amount=after_tax+bill;
	printf("final payable amount after tax = %f",final_amount);
}
	else{
		printf("no tax");
	}
	
	return 0;
}
