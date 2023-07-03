//volume of cylinder
#include<stdio.h>
int main()
{
	float pi=3.14 ,r,h,volume;
	
	printf("Enter the radius and height:-");
	scanf("%f %f",&r,&h);
	
	volume=pi*r*r*h;
	printf("Volume of cylinder is:-%f",volume);
	return 0;
}
