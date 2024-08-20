#include<stdio.h>
int main(){
	float phy,chem,math,total,sum;
	printf("enter physics marks: ");
	scanf("%f",&phy);
	printf("enter chemistry marks: ");
	scanf("%f",&chem);
	printf("enter maths marks: ");
	scanf("%f",&math);
	total = phy+chem+math;
	sum = math+phy;
	printf("%f is the total marks\n",total);
	printf("%f is the marks obtained in maths and physics\n",sum);
	if(total>=190 || sum>=140){
		if(math>=65 && chem>=50 && phy>=55 ){
			printf("eligible");
		}
		else
		printf("not eligible");
	}
	else
	printf("not eligible");
	return 0;
}
