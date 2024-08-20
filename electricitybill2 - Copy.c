#include<stdio.h>
int main(){
	float pay,unit,charge,bill,tax;
	printf("enter unit: ");
	scanf("%f",&unit);
	if(unit<=50){
		printf("charge per unit = 0.50\n");
		bill=unit*0.50;
		printf("final bill = %f\n",bill);
	}
	else if(unit>50 && unit<=150){
		printf("charge per unit = 0.75\n");
		bill=unit*0.75;
		printf("final bill = %f\n",bill);
	}
	else if(unit>150 && unit<=250){
		printf("charge per unit = 1.20\n");
		bill=unit*1.20;
		printf("final bill = %f\n",bill);
	}
	else{
		printf("charge per unit = 1.50\n");
		bill=unit*1.50;
		printf("final bill = %f\n",bill);
	}
	
	printf("tax = 20%%\n");
	tax=bill*0.20;
	pay=bill+tax;
	printf("final payable amount = %f",pay);
	
	return 0;
}
