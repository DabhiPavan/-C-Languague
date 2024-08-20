#include<stdio.h>
int main(){
	float lenght,height,breadth,radius,ans,pi=3.14;
	int i;
	printf("1-rectangle\n");
	printf("2-square\n");
	printf("3-circle\n");
	printf("4-cylinder\n");
	printf("select shape(1-4)");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("enter length and breadth");
			scanf("%f %f",&lenght,&breadth);
			ans=lenght*breadth;
			printf("area of rectangle is %f",ans);
			break;
		case 2:
			printf("enter length");
			scanf("%f",&lenght);
			ans=lenght*lenght;
			printf("area of squARE is %f",ans);
			break;
		case 3:
			printf("enter radius");
			scanf("%f",&radius);
			ans=pi*radius*radius;
			printf("area of circle is %f",ans);
			break;
		case 4:
			printf("enter radius and height");
			scanf("%f %f",&radius,&height);
			ans=pi*radius*height;
			printf("area of cylinder is %f",ans);
			break;
			default:
				printf("error");
	}
	return 0;
}
